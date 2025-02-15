#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data){
        this-> data = data;
        this->left = NULL;
        this-> right = NULL;
    }

};
node * insert(node * root){
    cout << "Enter data : " << endl;
    int data ;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << "Insert data for left part of " << data << endl;
    root->left = insert(root->left);
    cout << "Insert data for right part of " << data << endl;
    root->right = insert(root->right);
    return root;

}
void LevelOrderTraverse(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node* root){
    if(root== NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node * root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout <<  root->data << " ";
}
node * root = NULL;
int main()
{
    root = insert(root);
    LevelOrderTraverse(root);
}
