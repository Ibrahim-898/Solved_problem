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
    vector<pair<int,int>> v(n),ans(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    vector<ll> ps(n+1);
    ps[0]=0;
    for(int i=1;i<=n;i++) ps[i]=ps[i-1]+v[i-1].first;
    for(int i=0;i<n-1;i++){
        ans[i].first = v[i].second;
        int j = i+1;
        while(j<n  && v[j].first<=ps[j]){
            j++;
        }
        ans[i].second = j-1;
        while(i+1<j){
            ans[i+1].first = v[i+1].second;
            ans[i+1].second = j-1;
            i++;
        }
    }
    ans[n-1].first=v[n-1].second;
    ans[n-1].second = n-1;
    sort(ans.begin(),ans.end());
    for(auto u:ans){
        cout << u.second << " ";
    }
    cout << endl;

    
    
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