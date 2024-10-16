//Template 
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
    ll a,b,c;
    cin >> a >> b >> c ;
        ll x = 1LL*pow(10,a-1);
        ll y = 1LL*pow(10,b-1);
        if(a==c){
            y =2*y;
            cout << x << " " << y << endl;
        }
        else {
            y = y + 1LL * pow(10,c-1);
            cout << x << " " << y << endl;
        }
    
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