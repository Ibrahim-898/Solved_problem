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
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    ll n,cnt=1,ans=1,l,r;
    cin >> n ;
    vector<pair<int,int>>  a(n),b(n),c(n);
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a[i]={x,i};
    }
    for(int i=0;i<n;i++) {
        int y;
        cin >> y;
        b[i]={y,i};
    }
    for(int i=0;i<n;i++) {
        int z;
        cin >> z;
        c[i]={z,i};
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    if(a[0].second!=b[0].second && a[0].second!=c[0].second) {
        ans = a[0].first+b[0].first+c[0].first ;
        cout << ans << endl;
        return;
    }
     if(a[0].second!=b[0].second){
        ans=a[0].first+b[0].first+c[1].first;
     }
     if(a[0].second!=c[0].second){
        ans=a[0].first+c[0].first+b[1].first;
     }
     if(b[0].second!=c[0].second){
         ans=b[0].first+c[0].first+a[1].first;
     }
     if(a[0].second==b[0].second && b[0].second==c[0].second){
        if(a[0].first>=b[0].first && a[0].first>=c[0].first){
            ans=a[0].first;
            if(b[1].first>=c[1].first) {
                ans+=b[1].first+c[2].first;
            }
            else ans+=b[2].first+c[1].first;
        }
        else if(b[0].first>=a[0].first && b[0].first>=c[0].first){
            ans=b[0].first;
            if(a[1].first>=c[1].first) {
                ans+=a[1].first+c[2].first;
            }
            else ans+=a[2].first+c[1].first;
        }
        else
        {
            ans=c[0].first;
            if(a[1].first>=b[1].first) {
                ans+=a[1].first+b[2].first;
            }
            else ans+=a[2].first+b[1].first;

        }
     }
     cout << ans << endl;
     
      
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