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
    ll n,mx,ans;
    cin >> n;
    mx = (n*(n+1)*(2*n+1))/6;
    mx-=(n*n);
    //cout << "* " << mx << endl;
   for(int i=1;i<n;i++){
    ll p=n,mx1=0;
    ans=(i*(i+1)*(2*i+1))/6;
   // cout << ans << endl;
    for(int j=i+1;j<=n;j++){
        //cout << ans << " " << mx1  <<  " p " << p << endl;
        if(p*j>mx1) mx1=p*j;
        ans+=(p*j);
        p--;
    }
    mx=max(ans-mx1,mx);
   }
   ans=0;
  int p=n,mx2=0;
   for(int i=1;i<=n;i++){
    if(p*i>mx2) mx2=(p*i);
    ans+=(p*i);
    p--; 
   }
    mx=max(ans-mx2,mx);
   cout << mx << endl;
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