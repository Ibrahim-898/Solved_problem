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
    ll n,k,ans=0;
    cin >> n ;
    vector<ll> v(n),a(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int j= n-1;
    for(int i=n-1;i>=0;i--){
        while(j>=0){
            if(v[j]<=a[i] && j>=0) {
                ans++; 
                j--;
                //cout << i << " " << j << " " << ans << endl;
                break;
            }
            else j--;
        }
       // cout << endl;
    }
    cout << n-ans << endl;
   
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