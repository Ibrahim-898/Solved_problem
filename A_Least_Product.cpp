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
   ll n,pos=0,neg=0,zero=0;
   cin >> n;
   vector<ll> v(n);
   for(int i=0;i<n;i++) {
    cin >> v[i];
    if(v[i]==0) zero++;
    if(v[i]>0) pos++;
    else if(v[i]<0) neg++;
   }
  if(zero>0) {
    cout << 0 << endl;
    return;
  }
  if(neg%2==0) {
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
  }
  else cout << 0 << endl;
    
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