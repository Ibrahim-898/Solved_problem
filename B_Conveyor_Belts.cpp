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
        ll n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        ll rem=n-x+1;
        if(n-y>rem){
            ll ans=max(a,b)-y;
            cout << ans << endl;
        }
        else
        {
            if(a<=rem){
                cout << y-rem << endl;
            }
            else cout << x-rem << endl;
        }
        
    }
}