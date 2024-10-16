
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,mn=1e9+10,f=0;
    cin >> n ;
    vector<int> v(n);
for(int i=0;i<n;i++) {
      cin >> v[i];
      if(v[i]<mn ) {
        mn = v[i];
        f=i+1;
      }

}
    if(n%2) cout << "Mike" << endl;
    else {
        if(f%2) cout << "Joe" << endl;
        else cout << "Mike" << endl;
    }
    
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

