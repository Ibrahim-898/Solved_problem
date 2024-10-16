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
const int N=100;
void solve() {
   int n,k,x,y,cnt=0;
   cin >> n >> k;
   if(n==1){
    cout << k  << endl;
    return;
   }
   x=k,y=n;
   while(x>=2){
    x/=2;
    cnt++;
   }
   if((1<<(cnt+1))-1==k){
    cout << ((1<<(cnt+1))-1) << " ";
    k-=((1<<(cnt+1))-1);
    cnt=0;
    y--;
    while(y>0){
        cout << 0 << " ";
        y--;
    }
    cout << endl;
    return;
   }
  cout << (1<<cnt)-1 <<  " " << k-((1<<cnt)-1) << " ";
  y-=2; 
   
   while(y>0){
    cout << 0 << " ";
    y--;
   }
   cout << endl;
   
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