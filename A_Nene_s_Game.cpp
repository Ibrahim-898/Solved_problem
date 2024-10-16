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
    ll k,q,cnt=0;
    cin >> k >> q;
    vector<ll> v(k);
    for(int i=0;i<k;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        if(x<v[0]) cout << x << " ";
        else cout << v[0]-1 << " ";
    }
    cout << endl;
    

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