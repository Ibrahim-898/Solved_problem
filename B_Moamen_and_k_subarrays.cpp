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
   int n,k,cnt=1,mx=-1e9,mn=1e9;
   cin >> n >>k;
   vector<pair<int,int>>  pr;
   for(int i=0;i<n;i++) {
    int x;
    cin >> x;
    pr.push_back({x,i+1});
    }
    sort(pr.begin(),pr.end());
    for(int i=0;i<n-1;i++){
        if(pr[i+1].second-pr[i].second!=1) cnt++;
    }
    if(cnt<=k) cout <<  "Yes" << endl;
    else cout << "No" << endl;
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