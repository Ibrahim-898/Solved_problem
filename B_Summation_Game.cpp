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
    int n,k,x,sum=0,cnt=0;
    cin >> n >> k >> x;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin  >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) {
        cnt++;
        if(cnt>n-x) sum+=(-1*v[i]);
        else sum+=v[i];    
    }
    int i=n-1,m=x,ans=sum;
    for(int j=0;j<k;j++){
        sum+=v[i];
        if(i-m>=0) sum-=2*v[i-m];
        i--;
        ans=max(ans,sum);
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