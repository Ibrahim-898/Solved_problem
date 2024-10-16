#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void PreorderPrint(Node * root){
    if(root==NULL) return;
    cout << root->val << " ";
    PreorderPrint(root->left);
    PreorderPrint(root->right);

}
void InorderPrint(Node * root){
     if(root==NULL) return;
    InorderPrint(root->left);
    cout << root->val << " ";
    InorderPrint(root->right);
    

}
void PostorderPrint(Node * root){
    if(root==NULL) return;
    PostorderPrint(root->left);
    PostorderPrint(root->right);
    cout << root->val << " ";
}
void LevelorderPrint(Node * root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        q.pop();
   if(root->left!=NULL) q.push(root->left);
   if(root->right!=NULL) q.push(root->right);
   cout<< root->val << " ";
    }    
}
Node * inputBinaryTree(){
    int val;
    cin >> val;
    Node * root;
    queue<Node*> q;
    if(val!=-1){
        root = new Node(val);
    }
    else root=NULL;
    if(root) q.push(root);
    while(!q.empty()){
        Node * node = q.front();
        q.pop();
        int lft,rht;
        cin >> lft >> rht;
        Node * left;
        Node * right;
        if(lft!=-1) {
           left = new Node(lft);
           q.push(left);
        }
        else{
            left = NULL;

        }
        if(rht!=-1) {
            right  =new Node(rht);
            q.push(right);
        }
        else{
            right = NULL;
        }
         node->left = left;
          node->right = right;
    }
    return root;
}
int NumberOfNode(Node * root){
    if(root==NULL) return 0;
   int l =  NumberOfNode(root->left);
    int r = NumberOfNode(root->right);
    return l+r+1;
}
int LeafNode(Node * root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    else{
        int l = LeafNode(root->left);
        int r = LeafNode(root->right);
        return l+r;
    }

}
int Height(Node * root){
    if(root==NULL) return 0;
   int l =  Height(root->left);
    int r = Height(root->right);
    return max(l,r)+1;
}
 int diameter(Node * root){
    if(root==NULL) return 0;
    int l = diameter(root->left);
    int r = diameter(root->right);
    return max(l,r)+1;
 }
 void CompleteBinaryTreeIntoArray(Node * root,int a[]){
    queue<Node *> q;
    q.push(root);
    int i=0;
    while(!q.empty()){
        Node * node = q.front();
        q.pop();
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        a[i]=node->val;
        i++;
    }

 }
int main()
{
    
    // Node * root = new Node(10);
    // Node * a = new Node(20);
    // Node * b = new Node(30);
    // root->left = a;
    // root->right = b;
    // Node * c = new Node(40);
    // Node * d = new Node(50);
    // a->left=c;
    // a->right = d;
    //  Node * e = new Node(60);
    // Node * f = new Node(70);
    // b->left = e;
    // b->right = f;
    //  Node * g = new Node(80);
    // Node * h = new Node(90);
    // e->left = g;
    // f->right = h;
   // InorderPrint(root);
   //LevelorderPrint(root);
   //cout << root->val << endl;
    Node * root = inputBinaryTree();
   LevelorderPrint(root);
   cout << endl;
//   int x= NumberOfNode(root);
//   cout << x << endl;
//  int y =  LeafNode(root);
//  cout << y << endl;
//  int ans = Height(root);
//  cout << ans << endl;
int a[10];
CompleteBinaryTreeIntoArray(root,a);
for(auto u:a){
    cout << u << " ";
}



}