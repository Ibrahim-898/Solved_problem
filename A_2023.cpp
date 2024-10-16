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
    ll n,k,x=2023,mul=1;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        mul*=v[i];
    }
    if(x%mul==0) {
        cout << "YES" << endl;
        cout << x/mul << " ";
        k--;
        while(k--){
            cout << 1 << " ";
        }
        cout << endl;
    }
    else cout << "NO" << endl;
    
    
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