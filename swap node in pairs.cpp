#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
     node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};
void insertAttail(node* &head,node* &tail,int data){
    node* temp = new node(data);
    if(head == NULL && tail == NULL){
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void pairswapNode(node* &head,node* &tail){
    node* prev = head;
    node* cur = head->next;
    int cnt=1;
    head = cur;
    node* temp = cur->next;
    while(1){
        cur->next = prev;
        if(temp == NULL || temp->next == NULL){
            prev->next = temp;
            break;
        }
        prev->next = temp->next;
        //cout << prev->next->data << " " << temp->data << endl;
        prev = temp;
        cur = prev->next;
        temp =cur->next;
        //cout << prev->data << " " <<  cur->data << endl;
    }
}
node* head = NULL;
node* tail = NULL;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        insertAttail(head,tail,x);
    }
    pairswapNode(head,tail);
    print(head);
    
}