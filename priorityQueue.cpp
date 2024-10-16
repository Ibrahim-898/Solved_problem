#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll,int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

};
class cmp{
    public:
    bool operator()(student a,student b){
        if(a.marks>b.marks) return true;
        if(a.marks==b.marks){
            if(a.roll>b.roll) return true;
            else return false;
        }
       else return false;

    }

};
int main()
{
   // priority_queue<int> pq;
     //priority_queue<int,vector<int>,greater<int>> pq;
    // while(1){
    // int c;
    // cin >> c;
    // if(c==0){
    //     int x;
    //     cin >> x;
    //     pq.push(x);
    // }
    // else if(c==1) pq.pop();
    // else if(c==2) cout << pq.top() << endl;
    // else break;
    // }
    int n;
    cin >> n;
    priority_queue<student,vector<student>,cmp> pq;
    for(int i=0;i<n;i++)
     {
    string name;
    int roll;
    int marks;
    cin  >> name  >> roll  >> marks;
    student obj(name,roll,marks);
    pq.push(obj); 
   }
   while(!pq.empty()){
    cout << pq.top().name << "  " << pq.top().roll << " " << pq.top().marks << endl;
    pq.pop();
   }
}