#include<bits/stdc++.h>
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
node *head1 = NULL;
void insertAttail(int data){
    node* temp = new node(data);
    if(head == NULL && tail == NULL){
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}
void insertatHead(int data)
{
    node * temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertatPosition(node* &head, node* &tail ,int pos ,int data){
    if(pos==1){
        insertatHead(data);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt < pos-1){
        temp = temp-> next;
        cnt++;
    }
    if(temp->next == NULL) {
        insertAttail(data);
        return;
    }
    node* cur = new node(data);
     cur-> next =temp->next;
    temp->next =cur;
}
void print(){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void swap_pairs(){
	 node* ptr = head;
    
    while(ptr != tail && ptr->next->next != NULL ){
         node *curr = head, *prev = head, *temp = NULL;

            curr = curr->next;
        while(curr != NULL){
            if(curr == tail){
                temp = tail;
                temp->next = ptr->next;
                ptr->next = temp;
                tail = prev;
                tail->next=NULL;
                break;
            }
            curr = curr->next;
            prev = prev->next;
        }
        ptr = ptr->next->next;
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
    // print();
    node *md = mid();
    //cout << md->next << endl;
   // Reversenode(md);
    //Reversehalfarray(md->next);
    //md->next =NULL;
    swap_pairs();
    print();
}