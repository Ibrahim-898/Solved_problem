//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,
         const pair<int,int> &b){
    return(a.second<b.second);
}

 
int main()
{
    ios();
    ll n,m;
    cin >> n >> m; 
    vector<ll> v(n),ps(n+1),vd(n),vd1(n),ps1(n+1);
    ps[0]=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vd[0]=0;
    for(int i=0;i<n-1;i++){
        ll x=v[i]-v[i+1];
        if(x>=0) vd[i+1]=x;
        else vd[i+1]=0;
    }
    for(int i=1;i<=n;i++){
        ps[i]=ps[i-1]+vd[i-1];
    }
      reverse(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        ll x=v[i]-v[i+1];
        if(x>=0) vd1[i+1]=x;
        else vd1[i+1]=0;
    }
    ps1[0]=0;
    for(int i=1;i<=n;i++){
        ps1[i]=ps1[i-1]+vd1[i-1];
    }
    reverse(ps1.begin(),ps1.end());
    while(m--)
    {
        ll a,b;
        cin >> a >> b;
        if(a<b) cout << ps[b]-ps[a] << endl;
        else cout << ps1[b-1]-ps1[a-1] << endl;
    }
}