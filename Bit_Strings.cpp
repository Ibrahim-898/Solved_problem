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
const int m=1e9+7;
void solve() {
    int n;
    cin >> n;
    int ans =1;
    for(int i=1;i<=n;i++){
        ans = ((ans%m) * (2%m))%m;
    }
    cout << ans << endl;
    
    
}
int main()
{
    ios();
        solve();

}