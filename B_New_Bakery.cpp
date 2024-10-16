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
    ll n,a,b,ans;
    cin >> n >> a>> b;
    if(b>a){
        if(b-a+1>=n){
            ans = (b*(b+1)/2)-((b-n)*(b-n+1)/2);
            cout << ans << endl;
        }
        else{
             ans = (b*(b+1)/2)-(a*(a+1)/2);
             ans+=(n-(b-a))*a;
             cout << ans << endl;
        }
    }
    else {
        cout << n*a << endl;
    }
    
    
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