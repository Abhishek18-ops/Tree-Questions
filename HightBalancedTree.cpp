#include<bits/stdc++.h>
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

int height(Node * root){
    if(root==NULL){
        return 0;
    }
    int lh  = height(root->right);
    int rh = height(root->left);
    return max(lh,rh)+1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }
    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh) <=1){
        return true;
    }else {
        return false;
    }
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool isBalnced1(Node* root , int* height){
    if(root == NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isBalnced1(root->left,&lh)== false){
        return false;
    }
    if(isBalnced1(root->right,&rh) == false){
        return false;
    }
    *height = max(lh,rh)+1;
    if(abs(lh - rh) <=1)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* root = new Node(1) ;
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    // root->right->right->left->left = new Node(9);


    inorder(root);
    cout << endl;
    int height=0;
    if(isBalnced1(root,&height) == true){
        cout << "Balanced Tree !" << endl;
    }else {
        cout << "Not a balanced Tree !" << endl;
    }
    
}