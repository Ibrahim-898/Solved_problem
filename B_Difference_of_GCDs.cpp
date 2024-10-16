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
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    ll n,l,r,x,m;
    cin >> n >> l >> r;
    if((r-l+1)<n){
        cout << "NO" << endl;
        return;
    }
    vector<int> v;
    v.push_back(l);
      x=l+1;
    for(int i=2;i<=n;i++){
        while(x%i!=0 && x<=r){
            x++;
        }
        if(x<=r) {
            v.push_back(x);
            x++;
        }
        else break;
    }
    if(v.size()<n) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
         for(auto u:v){
        cout << u << " ";
    }
    cout <<  endl;
    }
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