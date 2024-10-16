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
     int n,ans;
     cin >> n;
     if(n%2) {
        cout << 0 << endl;
        return;
     }
     if(n%4){
         ans = n-(n/2)-1;
        ans/=2;
     }
     if(n%4==0){
        ans = n-(n/2)-4;
        ans/=2;
        ans++;
     }
     cout << ans << endl;
}
int main()
{
    ios();
        solve();
}