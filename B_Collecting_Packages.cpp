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
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
bool issorted(int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]!=a[i+1] || a[i]+1!=a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    ll n,k,cnt=0,x,y;
    cin >> n ;
    vector<pair<int,int>> pr(n+1);
    pr[0]={0,0};
    for(int i=1;i<=n;i++){
        int x,y;
        cin >> x >> y;
        pr[i]={x,y};
    }
    vector<char> v;
    sort(pr.begin(),pr.end(),cmp);
    for(int i=1;i<=n;i++){
        ll dif=pr[i].first-pr[i-1].first;
        ll dif1=pr[i].second-pr[i-1].second;
        if(dif1<0 || dif<0) {
            cout << "NO" << endl;
            return;
        }
        while(dif--){
            v.push_back('R');
        }
        while(dif1--){
            v.push_back('U');
        }
    }
    cout << "YES" << endl;
    for(auto u:v){
        cout << u;
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