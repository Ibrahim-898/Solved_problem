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
     int n,ans=0;
     cin >> n;
     vector<int> v(2*n);
     for(int i=0;i<2*n;i++) cin >> v[i];
     sort(v.begin(),v.end());
     int i=0,j=2*n-1;
     vector<pair<int,int>> pr;
     while(i<j){
        pr.push_back({v[j],v[i]});
        i++;
        j--;
     }
     cout << endl;
     for(int i=0;i<n-1;i++){
        ans+=abs(pr[i].first-pr[i+1].first);
        ans+=abs(pr[i].second-pr[i+1].second);
     }
     cout << ans << endl;
     for(auto u:pr){
        cout << u.first << " " << u.second << endl;
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