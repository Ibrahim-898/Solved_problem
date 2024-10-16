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
vector<ll> ans;
ll mn = 1e18+8;
ll Apple_Division(ll n,vector<ll> v,ll  sum){
      if(n==0){
        ans.push_back(sum);
        return sum;
      }
      ll taken = Apple_Division(n-1,v,sum+v[n-1]); 
      ll not_taken = Apple_Division(n-1,v,sum);
      cout << taken << " " << not_taken << endl;
      return min(taken,not_taken);

}
void solve() {
    ll n,sum=0;
    cin >>  n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int res = Apple_Division(n,v,sum);
    sort(ans.begin(),ans.end());
    ll result=1e18+7;
    for(int i=0;i<ans.size()-1;i++){
       if(ans[i]!=0 && ans[i+1]!=0) result=min(result,ans[i+1]-ans[i]);

    }
    cout << result << endl;
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();

    }
}