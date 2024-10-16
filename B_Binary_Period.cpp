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
    int zero=0,one=0;
   string t;
   cin >> t;
   for(int i=0;i<t.size();i++){
    if(t[i]=='0') zero++;
    else one++;
   }
   if(zero==0 || one==0) cout << t << endl;
   else{
    if(zero>=one){
        while(zero--){
            cout << 0 << 1;
        } 
        while(one--) cout << 0 << 1;
        cout << endl;
    }
    else{
        while(one--) cout << 1 << 0;
        while(zero--) cout << 1 << 0;
        cout << endl;
    }

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