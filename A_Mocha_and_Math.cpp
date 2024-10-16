
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  int ans = v[0];
  for(int i=1;i<n;i++){
    ans = ans&v[i];
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

