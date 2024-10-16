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
const  ll N=1e12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {

    ll n;
    cin >> n;
    vector<ll> v=cube();
    for(ll i=1;i*i*i<=n;i++){
        ll ans=n-i*i*i;
        bool it =binary_search(v.begin(),v.end(),ans);
        if(it) {
             cout << "YES" << endl;
             return;
        }
    }
    cout << "NO" << endl;
    
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