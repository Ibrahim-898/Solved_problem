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
    ll n,start=0,end=0,in=1,on=1,mx=-1e9;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        mx=max(mx,v[i]);
        if(v[i]>=0 && in) {
            start=i;
            in=0;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]>=0 && on){
            end=i;
            on=0;
        }
    }
    ll ans=0,res=0;
    for(int i=start;i<=end;i++){
        if(i%2!=0 && v[i]>0) ans+=v[i];
        else if (i%2==0 && v[i]>0) res+=v[i];
    }
    //cout << ans << " " << sum << endl;
    if(n==1) cout << v[0] << endl;
    else if(ans==0 && res==0) cout << mx << endl;
    else
    cout << max(ans,res) << endl;
    
    

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