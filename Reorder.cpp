#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this-> data = data;
        this-> next =NULL;
    }
};
node* head = NULL;
node* tail = NULL;
node * head1 = NULL;
void insertAttail(int data){
    node* temp = new node(data);
    if(head == NULL && tail == NULL){
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}
void insertattail(node * Node){
    node * temp = Node;
    tail->next = temp;
    temp = tail;
}
void insertatHead(node * Node)
{
    node * temp = Node;
    temp->next = head;
    head = temp;
}
void insertatPosition(int pos ,node * Node){
    if(pos==1){
        insertatHead(Node);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt < pos-1){
        temp = temp-> next;
        cnt++;
    }
    if(temp->next == NULL) {
        insertattail(Node);
        return;
    }
    node* cur = Node;
     cur-> next =temp->next;
    temp->next =cur;
}
void reverse(){
   node * prev = NULL;
   node *cur = head;
   node* temp = NULL;
   while(cur!=NULL){
    temp = cur->next;
    cur->next = prev;
    prev = cur;
    cur = temp;
   }
   head = prev;
}
int len(){
    node* temp = head;
    int len =0,cnt =0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
node * mid(){
    node* temp = head,* md = head;
    int len =0,cnt =0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    int mid = (len+1)/2;
    temp = head;
    while(cnt<mid){
        cnt++;
        md = temp;
        temp = temp->next;
    }
   // cout << md->data << endl;
    return md;
}
void Reversehalf(node * &start, node * &mdl){
    node * prev = NULL;
   node *cur = start;
   node* temp = NULL;
   while(cur!=NULL){
    temp = cur->next;
    cur->next = prev;
    prev = cur;
    cur = temp;
   }
   head1 = prev;
}
void print(){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reorder(){
    node * temp = head,* forward = head,*cur = head->next;
   node * nxt,*prev = head1;
   node * midl = mid();
   midl = midl->next;
   nxt = midl;
    int length = len();
    int cnt =0;
   while(cur!=NULL){
    forward =midl->next;
    midl->next = cur;
    temp ->next = midl;
    temp = cur;
    midl = forward;
    cur = cur->next;
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        insertAttail(x);
    }
    node * midl = mid();
   // print();
    Reversehalf(midl->next,midl);
    midl->next = NULL;
   // print();
    reorder();
    print();
}