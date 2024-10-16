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
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
}
int main()
{
     ios();
     ll n;
    cin >> n;
    vector<ll> v(n);
    ll hash[100012];
    ll hsh[100012];
    for(int i=0;i<100012;i++){
        hash[i]=0;
        hsh[i]=0;
    }
    for(ll i=0;i<n;i++){
        cin >> v[i];
        hash[v[i]]+=i+1;
    }
    reverse(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        hsh[v[i]]+=i+1;
    }
    ll  t,sum=0,ans=0;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        ans+=hash[x];
        sum+=hsh[x];
    }
    cout << ans <<" " <<  sum << endl;
}