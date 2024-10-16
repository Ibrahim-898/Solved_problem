#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
void solve(){
  int x0,x1,x2,a0,a1,a2;
  cin >> x0 >> x1 >> x2 >> a0 >> a1 >> a2;
   int  elmnt = x0+x2,ans,mn;
   mn = min(x2,a1);
   ans=2*mn;
   if(mn == x2) elmnt-=x2;
   else elmnt-=a1;
   if(a2>elmnt) ans -= 2*(a2-elmnt);
   cout << ans << endl;

}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
     solve();
     }
}