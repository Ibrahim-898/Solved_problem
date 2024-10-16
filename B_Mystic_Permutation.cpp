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
    int n;
    cin >> n;
    vector<int> v(n),a(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        a[i]=v[i];
    }
   // for(int i=0;i<n;i++) a.push_back(v[i]);
    sort(v.begin(),v.end());
    if(n==1) cout << -1 << endl;
    else{
     for(int i=0;i<n;i++){
        if(a[i]==v[i]){
            if(i==n-1) swap(v[i],v[i-1]);
             else swap(v[i],v[i+1]);  
        }
    }
    for(auto u : v){
        cout << u << " ";
    }
    cout << endl;
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