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
    int n,ans,sum=0,mn=1,mx=1e9;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a >> b;
        if(a==1) mn=max(b,mn);
        if(a==2) mx=min(b,mx);
        if(a==3) v.push_back(b);
    }
    if(mx<mn){
        cout << 0 << endl;
        return;
    }
    ans=mx-mn+1;
    for(int i=0;i<v.size();i++){
        if(v[i]<=mx && v[i]>=mn) ans--;
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