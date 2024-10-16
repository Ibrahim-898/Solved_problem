#include <bits/stdc++.h>

using namespace std;
class Node {
    public:
    int val;
    Node * prev;
    Node * next;
    Node (int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    } 
};
Node * head = NULL;
    Node * tail = NULL;
void insert_at_head(Node * & head,Node * & tail,Node * newnode ){
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next = head;
    head->prev =newnode;
    head = newnode;
}
void insert_at_tail(Node * &head,Node * &tail,Node * newnode){
    if(tail==NULL){
        head = newnode;
        tail=newnode;
        //cout << head->val << " " << cout << tail->val << endl;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_pos(Node * head,Node * tail,int pos,Node * newnode){
    Node * temp = head;
    int i=0;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    //cout << temp->next->next->val << endl;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
void print(Node *head){
    Node * temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl; 
}
int size(Node * head){
    Node * temp = head;
    int sz=0;
    while(temp!=NULL){
        sz++;  
        temp=temp->next;
    }
    return sz;
}
void print_Reverse(Node *tail){
    Node * temp =tail;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;

}

int main()
{
    
    int q ;
    cin >> q;
    while(q--){
        int x ,v;
        cin >> x >> v;
        if(x==0){
            Node * newnode = new Node(v);
            insert_at_head(head,tail,newnode);   
        }
        else if (x==size(head)){
            Node * newnode = new Node(v);
            insert_at_tail(head,tail,newnode);
        }
        else if(x<size(head)){
              Node * newnode = new Node(v);
            insert_at_pos(head,tail,x,newnode);
        }

       else if(x>size(head)){
            cout << "Invalid" << endl;
            continue;
        }
        cout << "L -> ";
        print(head);
          cout << "R -> ";
        print_Reverse(tail);  
       }   
}
