#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout << (((n>>i)&1));
    }
    cout << endl;

}
const int N=100;
void solve() {
        int x;
        cin >> x;
    for(int i=0;i<=30;i+=2){
        if(((x>>i)&1)==0 && ((x>>(i+1))&1)!=0){
       x=  (x|(1<<i));
        x = (x^(1<<(i+1)));
    }
        else if(((x>>i)&1)!=0 && ((x>>(i+1))&1)==0){
       x =  (x^(1<<i));
       x = (x|(1<<(i+1)));
    }
    }
    cout << x  << endl;
    
    

    
    
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

   }
}