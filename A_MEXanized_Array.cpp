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
    ll n,k,x,sum=0;
    cin >> n >> k >> x;
    if(k>x+1 || n<k ) cout << -1 << endl;
    else
    {
        for(int i=0;i<k;i++){
            sum+=i;
        }
        if(k==x) x--;
        for(int i=1;i<=n-k;i++){
            sum+=x;
        }
        cout << sum << endl;
    }
    //else cout << -1 << endl;
    
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