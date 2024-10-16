#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    int N;
    queue<int> q1;
    queue<int> q2;

    stack(){
        N=0;
    }
    void push(int data){
        q2.push(data);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    void pop(){
        //q1.front()
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        if(q1.size()==0) return true;
        return false;
    }
    int size(){
        return N;
    }

};
int main(){
    stack st;
    st.push(5);
    st.push(6);
    st.push(2);
    st.top();
}