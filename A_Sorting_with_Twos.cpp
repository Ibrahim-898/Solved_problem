
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,k,x,cnt=1,ans=1;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int i=n-1;
    while(v[i-1]<=v[i] && i>0) { cnt++; i--;}
    i--;
    while(v[i-1]<=v[i] && i>0) { ans++; i--;}
    if(v[0]>v[1]) ans++;
    cout << ans << " " << cnt << endl;
    if(cnt==n) {
        cout << "YES" << endl;
    return;
    }
    if(ans+cnt==n)
    {
        d m = log(ans)/log(2);
        if(floor(m)==m) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO"  << endl;
   
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

