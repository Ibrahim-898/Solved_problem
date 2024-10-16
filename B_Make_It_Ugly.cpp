
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
const int N=100;
void solve() {
    ll n,cnt=1,cnt1=1,ans=1e9+7,cnt2=0;
    cin >> n ;
    vector<int> v(n);
    for(int i=0;i<n;i++)  cin >> v[i];
    int x = v[0];
    for(int i=0;i<n-1;i++){
        if(v[i+1]==x)cnt1++;
        if(v[i]!=v[i+1]){
            cnt2+=2;
            ans = min(cnt,ans);
            cnt  = 1;
            i++;
        }
        else cnt++;
    }
    //cout << ans << " " << cnt << endl;
    ans = min(cnt,ans);
    if(cnt1==n) cout << -1 << endl;
    if(cnt2>0 && cnt2%2==0) cout << ans <<endl;
   else if(cnt2%2) cout << 0 << endl;
    
   
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