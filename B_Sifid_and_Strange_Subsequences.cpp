
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
    if(a.first!=b.first)
        return (a.first>b.first);
    else
        return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1);
    // ? :
}
const int N=52;
void solve() {
    int n,indx=-1,len = 1,dif,mn=1e9;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(auto u :v){
        if(u<=0) indx++;
    }
    for(int i=0;i<indx;i++){
        dif = abs(v[i]-v[i+1]);
        mn = min (mn,dif);
    }
    if(v[indx+1]<=mn &&) cout << indx+2 << endl;
    else cout << indx+1 << endl;
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}