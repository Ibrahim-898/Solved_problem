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
bool possible(ll mid,ll x,ll start,ll ans){
    if((mid+(x-start))<ans) return false;
    else return true;

}
void solve() {
    ll n,h,ans,indx=0,f=0;
    cin >> n >> h;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll res = (h+n-1)/n,start = v[0];
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]<res){
            indx = i+1;
            f=1;
        }
    }
        if(f){
            cout << f << " " << indx << endl;
            ll l = 1,r=1e17+2,mid;
            while(l<=r){
                mid = (l+r)/2;
                if(possible(mid,v[indx],start,h)==true){
                    ans = mid;
                    r = mid-1;
                }
                else {
                    l = mid+1;
                }  
            }
            
            cout << ans << endl;
        }
        else {
            cout << res << endl;
            return;
        
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