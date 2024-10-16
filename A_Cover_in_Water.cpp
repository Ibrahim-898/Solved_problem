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
   int n,x,cnt=1,ans=0,mx=0;
   cin >> n;
   string s;
   cin >> s;
   for(int i=1;i<n;i++){
    if(s[i]=='.' && s[i-1]=='.'){
        cnt++;
    }
    else{
        mx = max(cnt,mx);
        cnt=1;
    }
    if(s[i]=='.') ans++;
   }
   mx = max(cnt,mx);
   if(s[0]=='.') ans++;
   if(mx>2) cout << 2 << endl;
   else cout << ans <<  endl;
    
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