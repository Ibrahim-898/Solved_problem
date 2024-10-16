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
    int l,r,L,R,ans=0;
    cin >> l >> r >> L >> R;
    if(max(l,L)<=min(r,R)){
        ans+=min(r,R)-max(l,L);
        if(max(r,R)> min(r,R)) ans++;
        if(min(l,L)<max(l,L)) ans++;
        cout << ans << endl;
    }
    else cout << 1 << endl;
    
}
int main()
{
    ios();
    int  t = 1;
    cin >> t;
    while(t--){
        solve();

    }
}