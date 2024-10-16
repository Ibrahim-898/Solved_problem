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
    ll n,one=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
    }
    if(one==2){
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'  && s[i+1]=='1'){
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(one%2==0 ) cout << "YES" << endl;
   // else if(one>1 && one%2 && s[n-1]=='1' ) cout << "YES" << endl;
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