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
        ll n ,k;
        cin >> n >> k;
        vector<ll> v(n),pf(n+1);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        pf[0]=0;
       for(int i=1;i<=n;i++){
        pf[i]=pf[i-1]+v[i-1];
       }
        ll sum=0;
        for(int i=0;i<=k;i++){
            sum=max(sum,(pf[n-(k-i)]-pf[2*i]));
        }
        cout << sum << endl;
    }
    
}