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
    int n,m,k,cnt=0,ans=0;
    cin >> n >> m >> k;
    vector<int> v(n),a(m);
    map<int,int> mp,vis;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=n-1;i>=n-m;i--){
        if(mp[v[i]]>0 && vis[v[i]]==0) {
            vis[v[i]]++;
            cnt++;
        }
    }
    for(auto u:vis){
        cout << u.first << " " << u.second << endl;
    }
    cout << endl;
    cout << "cnt " <<  cnt << endl;
    if(cnt>=k) ans++;
    for(int i=n-m-1;i>=0;i--){
        if(mp[v[i+m]]>0) {
                vis[v[i+m]]--;
                cnt--;
        }
        if(mp[v[i]]>0 && vis[v[i]]==0) {
            cnt++;
            vis[v[i]]++;
        }
        cout << "* " << cnt << endl;
        if(cnt>=k) ans++;
    }
    cout << ans << endl;



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