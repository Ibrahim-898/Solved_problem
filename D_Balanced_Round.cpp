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
    int n,k,b,sum=0,result=0,cnt=1;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]<=k){
             cnt++;
        result=max(cnt,result);
        }
        else{
            result=max(cnt,result);
            cnt=1;
        }
    }
    if(n==1) result=n;
    cout << n-result << endl;
    
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