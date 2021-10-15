#include<iostream>
using namespace std;

class Node{
    public :
      int data;
      Node* left;
      Node* right;
      Node(int val){
          data = val;
          left = NULL;
          right = NULL;
      }
};

Node* sortedArrayToBst(int arr[],int start, int end){
    if(start > end){
        return NULL;
    }
    int mid = (start + end)/2;
    Node* root = new Node(arr[mid]);

    root->left = sortedArrayToBst(arr,start,mid-1);

    root->right  = sortedArrayToBst(arr,mid+1,end);

    return root;
}
void preorder(Node* root ){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[] = {-1,0,0,1,1,3,5};
    Node* root = sortedArrayToBst(arr,0,6);
    preorder(root);
    cout << endl;
}