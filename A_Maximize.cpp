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
   int x;
   cin >> x;
   if(x%2==0) {
    cout << x/2 << endl;
    return;
   }
   int mx=0,res=x-1;
   for(int i=x-1;i>=1;i--){
    int g = gcd(x,i);
    if(g>mx) {
        mx = g;
        res = i;
    }
   }
   cout  <<  res  << endl;
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