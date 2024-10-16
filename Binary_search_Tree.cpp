#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node* insertIntoBst(node* root ,int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
        if(data > root->data){
            root->right = insertIntoBst(root->right,data);
        }
        else{
            root->left = insertIntoBst(root->left,data);
        }
        return root;

}
void takeinput(node * &root){
    int data;
    cin >> data;
    while(data != -1){
       root =  insertIntoBst(root,data);
        cin >> data;
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
bool SearchInBst(node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data < x){
        SearchInBst(root->right,x);
    }
    else{
        SearchInBst(root->left,x);
    }
    return false;
}
int  pathLength(node * root,int ans, int sum){
    if(root==NULL) {
        return 0;
    }
    ans++;
    sum += pathLength(root->left,ans, sum) +  pathLength(root->right,ans, sum);
   
    cout << sum << endl;

    return sum;
}


int main ()
{
    node* root = NULL;
    cout << "Enter data to create BST " << endl;
    takeinput(root);
    //LevelOrderTraverse(root);
//     cout << endl;
//     int x;
//     //cout << "Enter the Element of Searching" << endl;
//     //cin >> x;
//     //bool ans = SearchInBst(root,x);
//    // cout << ans << endl;
//     int m;
//     cout << "New data to be placed " << endl;
//     cin >> m;
//    // insertIntoBst(root,m);
//     // LevelOrderTraverse(root);
     inorder(root);
     cout << endl;
     pathLength(root,0,0);
    

}

