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
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
bool issorted( int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
ll f(ll f1,ll f2){
    f2= f2-f1;
}
void solve() {
    ll n,cnt=0,mx=0;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]>mx) mx = v[i];
        mp[v[i]]++;
    }
    int fst=0,i=0;
   for(auto u:mp){
    if(u.first!=i){
        cout << i << endl;
        return;
    }
    if(u.second<2 && fst==0){
        fst=1;   
    }
    else if(u.second<2 && fst==1){
        cout << u.first << endl;
        return;

    }
    i++;
   }
   cout << mx+1 << endl;
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