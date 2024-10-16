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
    int n;
    cin >> n ;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int chk= abs(v[0])%2,sum=0,ans=v[0];
    for(int i=0;i<n;i++){
        if((abs(v[i])%2!=chk) && sum>=0){
            sum+=v[i];
            chk = abs(v[i])%2;
            ans = max(sum,ans);
        }
        else{
            sum = v[i];
            chk = abs(v[i])%2;
        ans = max(sum,ans);
        }
    }
    ans = max(sum,ans);
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