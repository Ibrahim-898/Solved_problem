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
    string s;
    cin >> s;
    int sz=s.size(),ans=0,cnt=0,mn=1e9;
    map<char,int> mp;
    for(int i=0;i<sz;i++){
        mp[s[i]]++;
    }
    for(auto u:mp){
        ans+=u.second*u.second;
        cnt++;
        if(u.second<mn) mn=u.second;
    }
    if(cnt==3) ans+=mn*7;
    cout << ans << endl;
}
int main()
{
     ios();
     solve();
}