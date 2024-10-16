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
   ll n,q,k;
   cin >> n >> q >> k;
   vector<ll> v(n+1);
   v[0]=0;
   for(int i=1;i<=n;i++) {
    cin >> v[i];
   }
   while(q--){
    int l,r;
    cin >> l >> r;
    if(l==r){
        cout << v[l]-1+(k-v[l]) << endl;
        return;
    }
    ll ans=0;
    ans+=v[l+1]-2;
    for(int i=l+1;i<r;i++){
        ans+=v[i+1]-(v[i-1]+2);
    }
    ans+=k-((v[r-1])+1);
    cout << ans << endl;

   }
   v.clear();

}
int main()
{
    ios();
        solve();
}