
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ll long long 
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod = 1e9+7;
void solve(){
  int n;
  ll x,ans=0;
  cin >> n ;
  vector<int> v(n),numzero(n);
  map<int,int> mp;
  for(int i=0;i<n;i++){
    cin>> v[i];
    numzero[i] = __builtin_clz(v[i]);
    mp[numzero[i]]++;
  }
  for(auto u:mp){
    x = u.second;
    if(u.second>1) ans+=(x*(x-1))/2;
  }
  cout << ans << endl;

}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

