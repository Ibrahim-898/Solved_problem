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
   int n,plusx=0,plusy=0,minusx=0,minusy=0,zerox=0,zeroy=0;
   cin >> n;
   for(int i=0;i<n;i++){
    int x,y;
    cin >> x >> y;
    if(x==0) zerox++;
    if(y==0) zeroy++;
    if(x>0) plusx++;
    else if(x<0) minusx++;
    if(y>0) plusy++;
    else if(y<0) minusy++;
   }
   if( plusx+zerox==n || minusx+zerox==n || plusy+zeroy==n || minusy+zeroy==n) cout << "YES" << endl;
   else cout << "NO" << endl;
    
    
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