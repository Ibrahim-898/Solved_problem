#include<bits/stdc++.h>
#include<string.h>
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
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int m;
  cin >> m;
  vector<int> b(m),ps1(n+1),ps2(m+1);
  for(int i=0;i<m;i++) cin >> b[i];
  vector<int> v;
  int i=0,j=0;
  ps1[0]=0;
  ps2[0]=0;
  for(int i=1;i<=n;i++){
    ps1[i]=ps1[i-1]+a[i-1];
  }
  for(int i=1;i<=m;i++){
    ps2[i]=ps2[i-1]+b[i-1];
  }
  int mx1=*max_element(ps1.begin(),ps1.end());
  int mx2=*max_element(ps2.begin(),ps2.end());
  cout << mx1+mx2 << endl; 
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