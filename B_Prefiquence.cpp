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
   ll n,m;
   cin >> n >> m;
   string a,b;
   cin >> a >> b;
   int cnt=0;
   int i=0,j=0;
   while(i<n && j<m){
    if(a[i]==b[j]) {
       // cout << a[i] << " " << b[i] << endl;
        cnt++;
        i++;
        j++;
    }
    else j++;
    //if(j==m) break;

   }
   cout << cnt << endl;
  
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