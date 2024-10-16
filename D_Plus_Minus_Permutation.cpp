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
     ll n,x,y,sum=0,ans = 0;
     cin >> n >> x >> y;
     ll plus = n/x,minus = n/y;
     ll bothmul = n/lcm(x,y);
     minus-=bothmul;
     sum = (n*(n+1)/2);
     ll nd = n-(plus-bothmul);
     ll sum2 = (nd*(nd+1)/2);
     ll rsum = sum-sum2;
     ans = (minus*(minus+1)/2);
     cout << rsum-ans << endl;
    
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