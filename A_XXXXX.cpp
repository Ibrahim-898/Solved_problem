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
    ll n,x,j=1;
    cin >> n >> x;
    vector<ll>v(n),ps(n+1);
    ps[0]=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        ps[i+1]=ps[i]+v[i];
    }
    if(ps[n]%x!=0){
        cout << n << endl;
        return;
    }
    ll l=1,r=n-2,sum=0,ans=-1,ans1=-1;
   for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum%x){
        ans=i+1;
        break;
    }
   }
       sum=0;
       for(int i=n-1;i>=0;i--){
        sum+=v[i];
        if(sum%x){
            ans1=i;
            break;
        }
       }
       if(ans==-1 && ans1==-1){
        cout << -1 << endl;
        return;
       }
      // cout << ans << " " << ans1 << endl;
       int res=max(n-ans,ans1);
       cout << res <<  endl;
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