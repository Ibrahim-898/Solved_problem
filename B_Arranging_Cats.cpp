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
   int n,onea=0,oneb=0,ans=0;
   cin >> n;
   string a,b;
   cin >> a >> b;
   for(int i=0;i<n;i++){
    if(b[i]=='1') oneb++;
    if(a[i]=='1') onea++;
   }
   for(int i=0;i<n;i++){
    if(b[i]=='1' && a[i]!='1') ans++;
   }
   int extra=onea-oneb;
   if(extra>0) ans+=extra;
   cout << ans << endl;

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