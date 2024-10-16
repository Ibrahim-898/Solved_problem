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
    ll n,k,ans=0;
    cin >>n >> k;
    if(k==4*n-2) cout << (n+(n-2))+2 << endl;
    else {
        if((k+1)/2>(n+(n-2))) cout << n+(n-2)+((k+1)/2-(n+(n-2))) << endl;
        else cout << (k+1)/2 << endl;

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