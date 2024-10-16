#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data){
        this->data = data;
        this-> left = NULL;
        this->right = NULL;
    }
};
node * root = NULL;
node * insertintoBst(node *root,int data){
    if(root==NULL){
            node * root = new node(data);
    return root;
    }
    if(data<root->data){
        root->left = insertintoBst(root->left,data);
    }
    else{
            root->right= insertintoBst(root->right,data);

    }
    return root;
}
void takeinput(){
    int data;
    cin >> data;
    while(data!=-1){
        root = insertintoBst(root,data);
        cin >> data;
    }

}
void preorder(node *&root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(node * root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void inorder(node * root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool searchinBst(node * root,int data){
    if(root==NULL) return false;
    if(root->data==data){
        return true;
    }
    if(data<root->data) searchinBst(root->left,data);
    else searchinBst(root->right,data);
}
int pathlength(node * root,int len){
    if(root==NULL) return 0;
    return pathlength(root->left,len+1)+pathlength(root->right,len+1)+len;

}
int height(node *root,int data,int heightt){
    if(root==NULL) return 0;
    if(root->data==data){
        return heightt;
    }
    if(data<root->data){
        height(root->left,data,heightt+1);
    }
    else height(root->right,data,heightt+1);
}
int depth(node * root){
    if(root==NULL) {
        return 0;
    }
    int lh=depth(root->left);
    int rh=depth(root->right);
    return max(lh,rh)+1;
}
int diameter(node * root){
    if(root==NULL) return 0;
    int lh=depth(root->left);
    int rh = depth(root->right);
    int h =lh+rh+1;
    int ld=diameter(root->left);
    int rd = diameter(root->right);
    return max(h,max(ld,rd));

}
int main()
{
    takeinput();
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    int x;
    cin >> x;
    cout << searchinBst(root,x) << endl;
   cout <<  pathlength(root,0) << endl;
   int p;
   cout << "which note height" << endl;
   cout << height(root,7,1) << endl;
   cout << "depth " << depth(root) << endl;
   cout << "*" <<  diameter(root) << endl;

}
