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
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>> v[i];
    sort(v.begin(),v.end());
    int i=0,j=n-1,ans=0;
    while(i<=j){
        if(v[i]+v[j]<=x) {
            ans++;
            i++;
            j--;
        }
        else {
            ans++;
            j--;
        }
        
    }
    cout << ans << endl;
    
}
int main()
{
    ios();
    // int  t;
    // cin >> t;
    // while(t--){
        solve();

    //}
}