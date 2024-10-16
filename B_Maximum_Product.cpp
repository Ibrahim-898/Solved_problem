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
     cin >> n;
     vector<ll> v(n);
     for(int i=0;i<n;i++) cin >> v[i];
     ll ans;
     sort(v.begin(),v.end());
     ll mul,mul1,mul2,mul3;
      mul = v[0]*v[1]*v[2]*v[3]*v[n-1];
      mul1 = v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
       mul2 = v[0]*v[1]*v[n-1]*v[n-2]*v[n-3];
      cout << max(max(mul,mul1),mul2) << endl;

    
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