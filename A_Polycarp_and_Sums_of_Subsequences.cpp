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
const int N=52;
void solve(){
    vector<ll> v(7);
    for(int i=0;i<7;i++) cin >> v[i];
     ll sum=v[0]+v[1];
     cout << v[0] << " " << v[1] << " " << v[6]-sum << endl;

    
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