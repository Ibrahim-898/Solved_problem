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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(n),a(m);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) cin >> a[i];
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    int i=0,j=0,ans=0;
 while(i<n && j<m ){
        if(v[i]>=(a[j]-k) && v[i]<=(a[j]+k)){
            ans++;
            i++;
            j++;
        }
        else if(v[i]>(a[j]+k)){
            j++;
        }
        else if(v[i]<(a[j]-k)){
            i++;
        }
        //if(i==n || j==m) break;
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

    // }
}