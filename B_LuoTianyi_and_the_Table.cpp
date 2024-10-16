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
    ll n,m,ans=0,sum=0;
    cin >> n >> m;
     ll subtable = n*m;
    vector<ll> v(subtable);
    for(int i=0;i<subtable;i++) cin >> v[i];
    sort(v.begin(),v.end());
    //cout << subtable  << " " << n << endl;
    int l=min(m,n);
     ans+=(v[subtable-1]-v[0])*(subtable-l);
    ans+=(v[subtable-2]-v[0])*(l-1);
    sum+=(v[subtable-1]-v[0])*(subtable-l);
    sum+=(v[subtable-1]-v[1])*(l-1);
    //cout << ans << " " <<  sum << endl;
   cout << max(ans,sum) << endl;

    
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