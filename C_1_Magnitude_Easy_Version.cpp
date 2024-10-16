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
    ll n,ans=0,res=0;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int i=0;
    while(i<n){
        if(v[i]>0 && res<=0){
            ans+=res;
            if(ans<0) ans*=-1;
            ans+=v[i];
            res = 0;
            i++;
        }
        else{  
        while(v[i]<=0){
            res+=v[i];
            i++;
        }
        }
    }
    ans+=res;
   if(ans<0) ans*=-1;
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