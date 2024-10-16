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
    int n,cnt=0,ans=0,mx=0;
    cin >> n;
    vector<string> v(n);
    map<string,int> mp;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        mp[v[i]]++;
        if(v[i] =="O") cnt++;
        if(v[i] == "AB") ans++;

    }
    for(auto u:mp){
        if(u.first == "A" || u.first == "B"){
         if(u.second>mx) mx=u.second;
        }
    }
    cnt+=ans+mx;
    cout << cnt << endl;
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