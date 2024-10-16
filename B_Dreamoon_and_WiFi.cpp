#include<bits/stdc++.h>
#include <iomanip>
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
   if(n==0) return 1;
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
const int N=100;
void solve() {
     string a,b;
     cin >> a >> b;
     int res=0,sum=0,cnt=0,ans=0,n;
     for(int i=0;i<a.size();i++){
        if(a[i]=='+') sum++;
        if(a[i]=='-') sum--;
        if(b[i]=='+') ans++;
        if(b[i]== '-') ans--;
        if(b[i]=='?') cnt++;
     }
     if(cnt==0 && ans==sum ) {
        cout << fixed <<  setprecision(12)  << 1.0  << endl;
        return;
     }
     int need = sum-ans;
     if(need>sum) {
      cout << fixed <<  setprecision(12)  << 0.0  << endl;
        return;
     }
     int sz = a.size();
     n = cnt;
     int xs =(sz-need)/2;
     if(xs==cnt) xs = cnt/2;
     //cout << xs << " " << cnt << endl;
    res+= ncr(n,xs);
     double x = res/pow(2.0,n);
     cout << fixed << setprecision(12) << x << endl;
    
}
int main()
{
    ios();
    
        solve();
}