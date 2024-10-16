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

    ll n,sum=0;;
    cin >> n;
    vector<int> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    /*for(auto u:v){
        cout << u << " ";
    }*/
    if(sum==n) cout << n << endl;
    else
    {
        ll ans=0,mx=0;
        for(ll i=0;i<n;i++){
            ans=0;
            ll j=i;
           while(j<n){
                ans+=v[j];
                j+=v[j];
            }
            //cout << ans << endl;
             mx=max(ans,mx);
            //cout << mx << endl;
        }
        cout <<  mx << endl;

    }
   
    
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