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
    int n,ans=0,mx =0,f=-1,cnt=0;
    cin >> n;
    vector<int> v(n+1);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]>0) f=i;
    }
     v[f+1]=0;
    for(int i=0;i<=f+1;i++){
        if(v[i]>0){
            if(mx<v[i]) mx = v[i];
        }
        else {
            ans+=mx-1;
            cnt++;
            mx=0;
        }  
    }
    ans+=cnt-1 ;
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