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
    ll n,ans=0,i=0,digit=0;
    cin >> n ;
    while(n>0){
        int x=n%10;
        n=n/10;
        if(x==7) ans += (1 << i);
        i++;
        digit++;
    }
    ans += (1 << (digit))-2;
    cout << ans+1 << endl;
    
}
int main()
{
    ios();
        solve();
}