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
     string a,b;
    cin >> a >> b;
    int sz=a.size(),f=1;
    for(int i=1;i<sz;i++){
        if(a[i]=='1' && b[i]=='1'){
            if(a[i-1]=='0' && b[i-1]=='0'){
                cout << "YES" << endl;
                return;
            }
        }
    }
      cout << "NO" << endl;
    
    
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