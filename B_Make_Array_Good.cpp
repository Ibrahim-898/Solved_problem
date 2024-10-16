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
    ll n,sum=0,cnt=1;
    cin >> n ;
    vector<ll> v(n),a(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=n-1;i>0;i--){
        if(v[i]==v[i-1]) cnt++;
        else break;
    }
    if(cnt<n) { 
        cout << n-cnt << endl;
        for(int i=0;i<n;i++){
            if(v[i]<v[n-1])
            cout << i << " " << v[n-1]-v[i] << endl; 
        }
    }
    else cout << 0 << endl;
    
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