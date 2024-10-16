#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
const int N=100;
void solve() {
   ll n;
   cin >> n;
   vector<ll> v(n-1),a(n);
   for(int i=0;i<n-1;i++) cin >> v[i];
   a[0]=v[0]+1;
   for(int i=1;i<n;i++){
    ll x= a[i-1]+v[i-1];
    if(x<=v[i]){
        ll k=2,p=a[i-1];
        for(int j=1;j<500;j++){
            if(p*j>v[i]){
                p=p*j;
            break; 
            }
        }
        a[i]=p+v[i-1];
    }
    else 
    a[i]=a[i-1]+v[i-1];
   }
   for(auto u:a){
    cout << u  << " ";
   }
   cout << endl;
}
    
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
   
}