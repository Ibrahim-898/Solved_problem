//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0); 
const int mod=1e9+7;
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
         ll n,q;
        cin >> n >>  q;
        vector<int> v(n),ps(n+1);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        ps[0]=0;
        for(int i=1;i<=n;i++){
            ps[i]=ps[i-1]+v[i-1];
        }
        while(q--){
            int x;
            cin >> x;
            if(x>ps[n]) cout << -1 << endl;
            else{
            int it=lower_bound(ps.begin(),ps.end(),x)-ps.begin();
            cout << it << endl;
            }
        }
    }  
}
