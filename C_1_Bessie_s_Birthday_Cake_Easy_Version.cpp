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
    int n,x,y,cnt=0,mex;
    cin >> n >> x >> y;
    vector<int> v(x);
    for(int i=0;i<x;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<x;i++){
        if(v[i]-v[i-1]==2) cnt++;
    }
    if(v[0] == 1 && v[x-1]==n-1 || v[0]==2 && v[x-1]==n) cnt++;
    cout << x-2+cnt << endl;

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