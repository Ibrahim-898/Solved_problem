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
    vector<pair<int,int>> pr;
   for(int i=0;i<4;i++){
    int x,y;
    cin >> x >> y;
    pr.push_back({x,y});
   }
   sort(pr.begin(),pr.end());
   int ans = abs(pr[0].second-pr[1].second)*abs(pr[2].second-pr[3].second);
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