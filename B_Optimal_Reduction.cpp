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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >>  v[i];
    int i=0,cnt=1,ans=1,j;
        while(v[i+1] >= v[i]) {
            cnt++;
            i++;
            j=i;
        }
        while(v[j+1] <= v[j]) {
            ans++;
            j++;
        }
        cout << ans << " " <<  cnt << endl;
        if(ans+cnt == n) cout << "YES" << endl;
        else cout << "NO" << endl;
       
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
