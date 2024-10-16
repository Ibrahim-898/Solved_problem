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
        this->right =NULL;
    }
};
Node * input(){
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
void LevelOrderPrint(Node * root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node * node = q.front();
        q.pop();
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        cout<< node->val << " ";
    }

}
bool SearchInBST(Node * root,int x){
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(root->val<x) {
        return SearchInBST(root->right,x);
    }
    if(root->val>x) {
      return SearchInBST(root->left,x);
    }
  
}
void InsertInBst(Node * &root,int v){
    if(root==NULL) {
        root = new Node(v);
        return;
    }
    if(root->val>v){
        if(root==NULL){
            Node * node = new Node(v);
            root->left=node;
        }
        else InsertInBst(root->left,v);
    }
    else{
        if(root->right==NULL){
            Node * node = new Node(v);
            root->right = node;
        }
        else InsertInBst(root->right,v);
    }
}
Node * ArrayIntoBst(int a[],int n,int l,int r){
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node * root = new Node(a[mid]);
    Node * leftroot = ArrayIntoBst(a,n,l,mid-1);
    Node * rightroot = ArrayIntoBst(a,n,mid+1,r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}
int main()
{
   
//    Node * root = input();
//      int x;
//    cin >> x;
//   InsertInBst(root,x);
//    LevelOrderPrint(root);
   //bool  ans = SearchInBST(root,x);
//    if(ans) cout << "YES" << endl;
//    else cout << "NO" << endl;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    Node * root = ArrayIntoBst(a,n,0,n-1);
     LevelOrderPrint(root);


}