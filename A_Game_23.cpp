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
     int a,b;
     cin >> a >> b;
     if(b%a!=0) {
        cout << -1 << endl;
        return;
     }
     int x = b/a,ans=0;
     while(x!=1){
        if(x%2==0){
            x/=2; 
            ans++;
        }
        else if(x%3==0) {
            x/=3; 
            ans++;
        }
        else {
            cout << -1 << endl;
            return;
        }
     }
cout << ans <<  endl;
    
}
int main()
{
    ios();
    
        solve();
}