#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
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
const int N=52;
void solve() {
    ll n,p;
    cin >> n >> p;
    ll ans=p,cnt=1;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    vector<pair<ll,ll>> pr;
    for(int i=0;i<n;i++) pr.push_back({b[i],a[i]});
    sort(pr.begin(),pr.end(),cmp);
    for(auto u : pr){
     if(u.first<p && cnt<n){
        if(u.second>(n-cnt)) {
            ans+=u.first*(n-cnt);
            cnt+=n-cnt;
        }
        else ans+=u.first*u.second;
        cnt+=u.second;
     } 
    }
     if(cnt<n) ans+=(p*(n-cnt));
    cout << ans << endl;


}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
