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
    int n,rem=0;
    cin >> n;
    vector<pair<int,int>> v(n+1);
   for(int i=1;i<=n;i++) {
    int x;
    cin >> x;
    v[i]={i,x};
   }
   for(int i=1;i<=n;i++){
    if(v[i].first==v[v[i].second].second){
        cout << 2 << endl;
        return;

    }
   }
   cout << 3 << endl;
   

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