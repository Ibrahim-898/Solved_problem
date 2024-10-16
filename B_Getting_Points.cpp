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
  ll n,p,l,t,need,point;
  cin >> n >> p >> l >> t;
  ll prac = (n/7)+(n%7!=0);
  point = (prac/2)*(2*t+l);
  if(point>=p) {
     cout << n-(p/(2*t+l)+(p%(2*t+l)!=0)) << endl;
  }
  else if(prac%2==1 && (point+t+l)>=p){
    cout << n-(prac/2+1) << endl;
  }
  else
  {
    p-=point;
    if(prac%2==1) { 
      p-=(t+l);
      n--;
    }
    cout << n-(prac/2+p/l+(p%l!=0)) << endl;

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