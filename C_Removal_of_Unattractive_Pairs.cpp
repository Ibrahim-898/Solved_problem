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
    string s;
    cin >> n >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int mx=0;
    for(auto u:mp){
        if(u.second>mx) mx = u.second;
    }
    int ans = n-mx,res;
    if(mx>ans) res = mx-ans;
    else {
         ans-=mx;
         res = ans%2;
    }
    cout <<  res << endl;
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
