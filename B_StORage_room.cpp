#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
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
    int n,mx =0,f=-1;
    cin >> n;
    vector<int> v;
    int a[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    int ans ,cnt=0,zero=0;
    for(int i=0; i<n; i++) {
        ans =a[0][i];
        if(i==0 && n>1) ans =a[1][0];
        for(int j=0,k=i; j<n; j++) {
            if(a[j][k]==0) zero++;
        if(j==k) continue;
         else  ans = ans & a[j][k];
        }
        if(ans==0) cnt++;
        v.push_back(ans);
    }
    if(n==1) {
        cout << "YES" << endl;
        cout << a[0][0] << endl;
        return;
    }
    if(cnt==n && zero!=n*n){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(auto u: v){
    cout << u << " ";
    }
    cout << endl;

}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--) {
        solve();

    }
}