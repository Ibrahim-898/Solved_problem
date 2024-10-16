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
   ll n,m,cnt=0,ans=0,x,p,q,res=0;
   cin >> n >> m;
   vector<int> v(n),a(m);
      for(int i=0;i<n;i++){
      cin >> v[i];
      }
      sort(v.begin(),v.end());
       for(int i=0;i<m;i++){
      cin >> a[i];
      }
      sort(a.begin(),a.end());
      int l=0,r=m-1,k=n-1,s=0;
      while(l<=k){
        p=abs(v[l]-a[r]);
        q=abs(v[k]-a[s]);
        if(p>=q){
          ans+=p;
          l++;
          r--;
        }
        else{
          ans+=q;
          k--;
          s++;
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