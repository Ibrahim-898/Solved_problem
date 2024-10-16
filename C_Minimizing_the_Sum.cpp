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
const int N=100;
void solve() {
    ll n,k,ans=0,x=1e9+100,p=1e9+100,q=1e9+100;
    cin >> n >> k;
    vector<ll> v(n),a;
    for(int i=0;i<n;i++){
        cin >> v[i];
        ans+=v[i];
    }
    if(v[0]-v[1]>0) {
        a.push_back(v[0]-v[1]);
        x = v[0]-v[1];
    }
    else a.push_back(0);
    for(int i=1;i<n-1;i++){
        if(v[i]-v[i-1]>0) p=v[i]-v[i-1];
        if(v[i]-v[i+1]>0) q = v[i]-v[i+1];
        //ll mn = min()
    }
    for(auto u:v){
        cout << u << " ";
    }
    cout << endl;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<k;i++){
        ans-=a[i];
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