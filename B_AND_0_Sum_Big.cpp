
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ll long long 
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod = 1e9+7;
void solve(){
  int n,k;
  cin >> n >> k;
  ll ans = 1;
  for(int i=1;i<=k;i++){
    ans = (ans*n)% mod;a
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

