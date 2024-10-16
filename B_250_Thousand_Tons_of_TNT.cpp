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
    ll n,maxel=0,minel=1e9,ans=0;
    cin >> n;
    vector<ll> v(n),ps(n+1),divisor;
    ps[0]=0;
    for(int i=0;i<n;i++){
         cin >> v[i];
         if(maxel<v[i]) maxel=v[i];
         if(minel>v[i]) minel=v[i];
        ps[i+1]=ps[i]+v[i];
        }
        ans=maxel-minel;
       //cout <<"*" <<  ans << endl;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) {
                if(n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
                }
                else divisor.push_back(i);
        }
        }
        ll k=0,sum,mx=0,mn=1e18;
    for(int i=0;i<divisor.size();i++){
        int j=divisor[i],k=0;
        mx=0,mn=1e18;
        while(j<=n && k<n){
            sum = ps[j]-ps[k];
            mx = max(mx, sum);
            mn = min(mn, sum);
            k+=divisor[i];
            j+=divisor[i];
        }
        ans=max(mx-mn,ans);  
    }
    cout << ans << endl;
     ps.clear();
     divisor.clear();

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