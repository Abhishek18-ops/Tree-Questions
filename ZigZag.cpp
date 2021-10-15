#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data; 
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void zigziag(Node* root) {
    if(root == NULL){
        return;
    }
    stack<Node*> currentlevel;
    stack<Node*> nextlevel;
    bool leftToright = true;
     currentlevel.push(root);

     while(!currentlevel.empty()){
         Node* temp = currentlevel.top();
         currentlevel.pop();

         if(temp){
             cout << temp->data << " ";
         
         if(leftToright){
             if(temp->left){
                 nextlevel.push(temp->left);
             }
             if(temp->right){
                 nextlevel.push(temp->right);
             }
         }else{
              if(temp->right ){
                 nextlevel.push(temp->right);
             }
             if(temp->left){
                 nextlevel.push(temp->left);

             }
            
         }
        }
        if(currentlevel.empty()){
            leftToright = !leftToright;
            swap(currentlevel,nextlevel);
        }
     }
}
void preorder(Node* root){
    if(!root){
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    // preorder(root);
    zigziag(root);
    cout << endl;
}