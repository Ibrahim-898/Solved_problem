#include <bits/stdc++.h>

using namespace std;
class Node {
    public:
    string val;
    Node * prev;
    Node * next;
    Node (string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    } 
};
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
void print(Node *head){
    Node * temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl; 
}
void palindrome(Node * head,Node * tail){
    Node * left = head;
    Node * right = tail;
    while(left!=right){
        if(left->val!=right->val){
            cout << "NO" << endl;
            return;
        }
        left=left->next;
        right=right->prev;  
    }
    cout << "YES" << endl;
}



int main()
{
    Node * head = NULL;
    Node * tail = NULL;
   string val;
    cin >> val;
    while(val!="end"){
        Node * newnode = new Node(val);
        insert_at_tail(head,tail,newnode);
        cin >> val;
    }
    Node * temp = head;
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string str;
        cin >> str;
        //cout << str << endl;
        if(str=="prev"){
            if(temp->prev==NULL){
                cout << "Not Available" << endl;
            }
            else{
                cout<< temp->prev->val << endl;
                temp=temp->prev;
            }
            
        }
        else if(str=="next"){
            if(temp->next==NULL){
                 cout << "Not Available" << endl;   
            }
            else{
                cout << temp->next->val << endl;
                temp = temp->next;
            }
            
        }
        else{
            string a ;
            cin >> a;
            Node * cur = head;
            int f=1;
            while(cur!=NULL){
                if(cur->val ==a ){
                    cout << cur->val << endl;
                    temp = cur;
                    f=0;
                    break;
                }  
                cur = cur->next;
            }
            if(f) cout << "Not Available" << endl;
            
        }      
    }   
}
