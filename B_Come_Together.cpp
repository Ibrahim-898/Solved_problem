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
    ll x,y,x1,x2,y1,y2,ans=1;
    cin >> x >> y>> x1 >> y1 >> x2 >> y2;
    if((x-x1)*(x-x2)>=1) ans+=min(abs(x-x1),abs(x-x2));
    if((y-y1)*(y-y2)>=1) ans+= min(abs(y-y1),abs(y-y2));
    cout << ans << endl;
    
   
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