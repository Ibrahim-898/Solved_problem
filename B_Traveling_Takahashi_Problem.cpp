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
    int n;
    cin >> n;
    vector<pair<double,double>> v;
    v.push_back({0.0,0.0});
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    v.push_back({0,0});
    double ans = 0.0;
    for(int i=0;i<=n;i++){
        double res = sqrt((abs(v[i].first-v[i+1].first)*abs(v[i].first-v[i+1].first))+(abs(v[i].second-v[i+1].second)*abs(v[i].second-v[i+1].second)));
        ans+=res;
    }
    cout << fixed << setprecision(20) <<  ans << endl;
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();

    }
}