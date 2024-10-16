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
    int n;
    cin >> n;
    vector<ll> v(n),dif;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            dif.push_back(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    sort(dif.begin(),dif.end());
    if(dif.empty()){
        cout << 0 << endl;
        return;
    }
     ll sz = dif.size();
    ll ans = dif[0]*(sz+1);
   
    for(ll i=1;i<sz;i++){
        ll x =  dif[i]-dif[i-1];
        ll add = x*(sz-i+1);
        ans+=add;
    }
    cout << ans <<  endl;
    
    
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