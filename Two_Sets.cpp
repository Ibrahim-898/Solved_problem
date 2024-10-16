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
    ll n,sum=0,ans=0;
    cin >> n;
    sum=(n*(n+1))/2;
    if(sum%2) cout << "NO" << endl;
    else {
        vector<ll> a,b;
        cout << "YES" << endl;
        for(ll i=n;i>=1;i--){
            ans+=i;
           // cout << ans << endl;
            if(ans<=(sum/2)) a.push_back(i);
            else {
                ans-=i;
                if(i!=sum-ans) b.push_back(i);
            }
        }
        cout << a.size() << endl;
        for(auto u:a){
            cout << u <<" ";
        }
        cout << endl;
        cout << b.size() << endl;
        for(auto u:b){
            cout << u <<" ";
        }
        cout << endl;
        
    }
    }
int main()
{
    ios();
        solve();
}