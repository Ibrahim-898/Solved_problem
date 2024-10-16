#include<iostream>
using namespace std;
class stack{
    public:
    string *arr;
    int top;
    int size;
    stack(int size){
        this-> size = size;
        arr = new string[size];
        top =-1;
    }
    void push(string data){
        if(top==size-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop(){
        if(top==-1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    void peek(){
        if(top==-1 || top == size){
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }

};
int main()
{
    int n;
    cin >> n;
    stack st(n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        st.push(s);
    }
    while(!st.empty()){
        st.peek();
        st.pop();
    }
    //st.peek();
    // infix to postfix
    
}