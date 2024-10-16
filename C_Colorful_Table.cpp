
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,k,x,mnx=0,mxn=0;
    cin >> n >> k;
    vector<int> v(n+1),a,mx(k+1),mn(k+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        a.push_back(v[i]);
    }
    for(int i=1;i<=n;i++){
         x=v[i];
         if(v[i]>mnx){
        while(x>mnx){
            mn[x]=i;
            x--;
        }
        mnx = v[i];
         }
    }
    for(int i=n;i>0;i--){
         x=v[i];
         if(v[i]>mxn){
        while(x>mxn){
            mx[x]=i;
            x--;
        }
        mxn = v[i];
         }
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=k;i++){
    auto it = binary_search(a.begin(),a.end(),i);
    if(it==0) cout << 0 << " ";
    else
    {
        if(mx[i]==mn[i]) cout << 2 << " ";
        else cout << 2*(mx[i]-mn[i]+1) << " ";
    }
    }
    cout << endl;
}
int main()
{
    ios();
     //int lim=1e7+10;
   // primegen(lim);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

   
    
}

