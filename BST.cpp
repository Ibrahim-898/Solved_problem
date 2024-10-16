#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node * right;
     node(int data){
        this->data = data;
        this-> left = NULL;
        this->right = NULL;
     }
};
node * insertintoBst(node *root,int data){
    if(root==NULL) {
        node * root = new node(data);
     return root;
     }
    if(data> root->data){
       root->right = insertintoBst(root->right,data);
    }
    else 
    {
        root->left = insertintoBst(root->left,data);
    }
    return root;
}
void takeinput(node* &root){
    int data;
    cin >> data;
    while(data!=-1){
       root =  insertintoBst(root,data);
        cin >> data;

    }
}
bool searchintoBst(node * root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data == data) {
        return true;
    }
    if(root->data>data){
        searchintoBst(root->left,data);
    }
    else {
        searchintoBst(root->right,data);
    }
}
void preorder(node *root){
    if(root==NULL) return;
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
node * root = NULL;
int main()
{
    takeinput(root);
    preorder(root);
    int x;
    cout << "element you want to search" << endl;
   bool ans =  searchintoBst(root,20);
   cout << ans << endl;
}