//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);

int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,q;
        cin >> n >> k >> q;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        ll cnt=0,ans=0,cmb=0;
        for(int i=0;i<n;i++){
            if(v[i]<=q) {
                cnt++;
            }
            else
            {
                if(cnt>=k) {
                        cmb=cnt-k+1;
                        ans+=(cmb*(cmb+1))/2;
                           
                }
                cnt=0;
            }
        }
        if(cnt>=k){
                cmb=cnt-k+1;
                ll com=(cmb*(cmb+1))/2;
                ans+=com;
            }
        
        cout << ans << endl;
        

    }
}