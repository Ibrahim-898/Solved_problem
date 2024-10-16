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
    int n,l,cnt=1;
    ld mn=1e9;
    cin >>n ;
    vector<int> v(n);
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++) {
       cin >> v[i];
       if(v[i]<mn) {
        mn=v[i];
        l=i;
       }
    }
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]) cnt++;
    }
    if(cnt==n) cout << 0 << endl;
    else if(mn==1 && cnt<n) cout << -1 << endl;
    else
    {
        for(int i=0;i<100;i++){
            mn=*min_element(v.begin(),v.end());
            int mindex = min_element(v.begin(), v.end()) - v.begin();
            for(int i=0;i<n;i++){
            if(v[i]>mn) {
                int x= v[i]/mn;
                if(x*mn!=v[i]) v[i]=x+1;
                else v[i]=x;
                ans.push_back(make_pair(i,mindex));

            }
            }
        }
        cout << ans.size() << endl;
        for(auto u : ans){
            cout <<    u.first+1  << " " << u.second+1 << endl;
        }
        cout << endl;
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