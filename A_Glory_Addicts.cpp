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
    ll n,sum=0;
    cin >> n ;
    vector<ll> v(n),a(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]) sum+=2*a[i-1];
        else sum+=a[i-1];
    }
    sum+=a[n-1];
    cout << sum << endl;
    
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