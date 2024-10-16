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
    int n,mx=0;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    for(auto u : mp){
        //cout << u.first << " " << u.second << endl;
        if(u.second>mx) mx=u.second;
    }
    int sz= mp.size()-1;
    if(sz>=mx) cout << mx << endl;
    else if(mx-sz==1) cout <<  sz << endl;
    else cout << sz+1 << endl;
    
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