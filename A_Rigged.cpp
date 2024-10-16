#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
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
void solve(){
    int n;
     cin >> n;
     vector<pair<int,int>> pr ;
     for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        pr.push_back({x,y});
     }
     sort(pr.begin()+1,pr.end(),cmp);
     int mx=pr[0].second,sz=pr.size();
     for(int i=1;i<sz;i++){
        if(pr[i].second>=mx){
            if(pr[i].first>=pr[0].first) {
                cout << -1 << endl;
                return;
            }
        }
     }
     cout << pr[0].first << endl;
}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
     solve();
     }
}