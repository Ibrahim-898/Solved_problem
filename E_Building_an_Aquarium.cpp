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
    ll n,x,dif,sum=0;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
     ll lo=0,hi=1e10,ans=0;
    while(hi-lo>=0){
        ll mid=(hi+lo)/2;
        sum = 0;
        for(int i=0;i<n;i++){
            dif=mid-v[i];
            if(dif>0) sum+=dif;
        }
        if(sum>x) {
                hi=mid-1;
        }
        else {
            ans=max(mid,ans);
            lo=mid+1;
        }
    }
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