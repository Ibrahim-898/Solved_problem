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
    ll n,sum=0;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        sum+=v[i];
    }  
    sort(v.begin(),v.end());
    if(sum%2==0){
        for(int i=0;i<n;i++){
            if(v[i]%2){
                sum-=v[i];
                cout << sum  << endl;
                return;
            }

        }
        cout << 0 << endl;
    }
    else cout << sum << endl;
    
  
}
int main()
{
    /*ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }*/
    solve();
}