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
const int N=1e9;
void solve() {
    int n;
    cin >> n;
    vector<int> v,a;
    for(int i=0;i*i<=n;i++){
        if(n%i==0) v.push_back(i);
        if(i*i!=n) v.push_back(n/i); 
    }
    sort(v.begin(),v.end());
    while(n>0){
        a.push_back(n%10);
        n=n/10;
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