//Template 
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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
       v[i]=make_pair(x,y);
    }
    sort(v.begin(),v.end(),cmp);
    ll on=v[0].first-1,total=v[0].second,in=0,prev=v[0].first,cnt=1;
    for(int i=1;i<n;i++){
        ll x=v[i].first;
        ll y=v[i].second;
        if(prev==x && on>0) {
            total+=y;
            on--;
        }
        else if(prev!=x){
            on=v[i].first-1;
            prev=v[i].first;
            y=v[i].second;
            total+=y;
        }
    //cout <<"*" <<  total << endl;
    }
        cout <<  total << endl;
    
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