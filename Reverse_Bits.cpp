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
    for(int i=31;i>=0;i--){
        cout << (((n>>i)&1));
    }
    cout << endl;

}
const int N=100;
void solve() {
        unsigned int x;
        cin >> x;
        int j = 31,i=0;
    while(i<j){
        if(((x>>i)&1) && (((x>>j)&1)==0)){
            x= ((1<<j)|x);
            x = (~(1<<i)&x);
        }
        else if(((x>>i)&1)==0 && ((x>>j)&1)){
             x= ((1<<i)|x);
            x = (~(1<<j)&x);
           
        }
        i++;
        j--;
         
    }
    cout << x << endl;   
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