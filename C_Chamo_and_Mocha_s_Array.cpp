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
    int n,mx=0;
    cin >> n;
    vector<int> v(n),a;
    for(int i=0;i<n;i++) cin >> v[i];
    if(n==2) {
        cout << min(v[0],v[1]) << endl;
        return;
    }
    for(int i=0;i<n-2;i++){
        a.push_back(v[i]);
         a.push_back(v[i+1]);
          a.push_back(v[i+2]);
          sort(a.begin(),a.end());
          int mid =a[1];
          if(mid>mx) mx = mid;
          a.clear();  
    }
    cout << mx << endl;
   
    
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