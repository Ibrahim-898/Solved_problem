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
const int N=100;
void solve() {
    ll n,cnt=0;
    cin >> n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if((n/i)!=i) cnt+=2;
            else cnt++;
        }
    }
    cout << cnt << endl;
}
    
int main()
{
    ios();
    // int  t;
    // cin >> t;
    // while(t--){
    //     solve();

    // }
    solve();
}