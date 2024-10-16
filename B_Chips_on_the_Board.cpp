#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
void solve(){
    ll n,suma=0,sumb=0;
     cin >> n;
     vector<ll> a(n),b(n);
     for(int i=0;i<n;i++) {
        cin >> a[i];
        suma+=a[i];
     }
     for(int i=0;i<n;i++) {
        cin >> b[i];
        sumb+=b[i];
     }
     ll mna=*min_element(a.begin(),a.end());
     ll mnb=*min_element(b.begin(),b.end());
     ll ans=min(suma+(n*mnb),sumb+(n*mna));
     cout << ans <<endl;


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