#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    } 
};
class DoublyNode{
    public:
     int val;
    DoublyNode * next;
    DoublyNode * prev;
    DoublyNode(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    } 
};
class Queue{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz=0;
        void push(int v){
        sz++;
         Node * newnode = new Node(v);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
        
    }
    int front(){
        return head->val;   
    }
    void pop(){
        sz--;
        Node * deletenode = head;
        head=head->next;
        delete deletenode;
        if(head==NULL){
            tail = NULL;
            return;
        }   
    }
    int size(){
        return sz;
        
        
    }
    bool empty(){
        if(size()==0) return true;
        else return false;
        
    }
    
};
class Stack{
    public:
    DoublyNode * head = NULL;
    DoublyNode * tail = NULL;
    int sz =0;
   
    void push(int v){
        sz++;
         DoublyNode * newnode = new DoublyNode(v);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        
    }
    int top(){
        return tail->val;
    }
    void pop(){
        sz--;
        DoublyNode * deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail==NULL){
            head==NULL;
            return;
        }
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz==0) return true;
        else return false;
    }
    
};



int main()
{
    int n,m,f=1;
    cin >> n >> m;
    if(n!=m){
        cout << "NO" << endl;
    }
    else{
    Stack st;
    Queue q;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        st.push(x);
    }
        for(int i=0;i<m;i++){
        int y;
        cin >> y;
        q.push(y);
    }
    while(!st.empty()){
        if(st.top()!=q.front()){
            cout << "NO" << endl;
            f=0;
            break;
        }
        st.pop();
        q.pop();
    }
    if(f) cout << "YES" << endl;
    }
   
}
