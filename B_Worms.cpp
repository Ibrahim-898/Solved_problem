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
void solve(){

}
int main()
{
     ios();
     int n;
     cin >> n;
     vector<ll> v(n),ps1(n+1);
     for(int i=0;i<n;i++) {
        cin >> v[i];
     }

     ps1[0]=0;
     for(int i=1;i<=n;i++){
        ps1[i]=ps1[i-1]+v[i-1];
     }
     int t;
     cin >> t;
        vector<ll> v1(t);
        for(int i=0;i<t;i++) cin >> v1[i];
     for(int i=0;i<t;i++){
        int it=upper_bound(ps1.begin(),ps1.end(),v1[i])-ps1.begin();
       if(ps1[it-1]==v1[i]) cout << it-1 << endl;
        else cout << it << endl;
     }

}