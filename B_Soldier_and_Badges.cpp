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
    ll n,ans=0,mx=0;
    cin >> n;
    vector<int> v(n);
    vector<int> hash(1e5,0);
    map<int,int> mp; 
    for(int i=0;i<n;i++) {
        cin >> v[i];
        hash[v[i]]++;
        mp[v[i]]++;
    }
    /*for(auto u:hash){
        cout << u << " ";
        
    }
    cout << endl;*/
   for(auto u:mp){
    if(u.second>1){
        int x=u.first,y=u.second,j=x+1;
        while(y>1){
            while(hash[j]!=0){
                j++;
            }
            ans+=j-x;
            hash[j]++;
        

            y--;
        }
    }
   }
   cout << ans << endl;
   hash.clear();
}
int main()
{
    ios();
    /*int  t;
    cin >> t;
    while(t--){
        solve();
    }*/
    solve();
}