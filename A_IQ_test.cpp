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
    int n,even =0,odd=0,ans=-1,res=-1;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]%2){
            odd++;
            ans = i+1;
        }
        else{
            even++;
            res = i+1;
        }
    }
    if(odd==1) cout << ans << endl;
    else cout << res << endl;
    
    
}
int main()
{
    ios();
    // int  t;
    // cin >> t;
    // while(t--){
        solve();

   // }
}