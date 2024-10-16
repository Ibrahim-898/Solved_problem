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
long long gcd(long long  a, long long b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
    
long long lcm(long long  a, long long  b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
   
const int N=100;
ll f(ll f1,ll f2){
    f2= f2-f1;
}
void solve() {
    ll n,m,mx=0,cnt=1,sum=0;
    cin >> n >> m;
    vector<int> v(n),a(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> a[i];
    ll ans=0,i=n-1;
   while(i>=m){
    ans+=min(v[i],a[i]);
    i--;
   }
   sum=ans+v[m-1];
   while(i>=1){
    ans+=min(v[i],a[i]);
    //cout << "*" << ans << " " << sum << endl;
    sum =min((ans+v[i-1]),sum);
    i--;
   }
   cout << sum << endl;
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