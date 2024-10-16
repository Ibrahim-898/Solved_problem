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
   ll n,k,cnt=0;
   cin >> n >> k;
   vector<ll> v(n);
   for(int i=0;i<n;i++){
    cin >> v[i];
   }
   sort(v.begin(),v.end());
   ll ans = v[0];
   for(int i=0;i<n-1;i++){
    if(k>=((i+1)*(v[i+1]-v[i]))){
        k-=((i+1)*(v[i+1]-v[i]));
        ans = v[i+1];
        v[i] = ans;
   }
   else {
    if((k/(i+1)>0)){
        ans = v[i]+(k/(i+1));
        v[i]=ans;
        k=(k%(i+1));
        break;
    }
    else break;
   }
   }
   for(int i=n-1;i>=0;i--){
    if(v[i]>ans) cnt++;
   }
   cnt+=k;
   ll res =ans+(n-1)*(ans-1)+cnt;
   cout <<  res << endl;
   
  
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