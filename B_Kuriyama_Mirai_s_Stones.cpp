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
     vector<ll> v(n),a(n),ps1(n+1),ps2(n+1);
     for(int i=0;i<n;i++) {
        cin >> v[i];
        a[i]=v[i];
     }
     sort(a.begin(),a.end());
     ps1[0]=0;
     for(int i=1;i<=n;i++){
        ps1[i]=ps1[i-1]+v[i-1];
     }
     ps2[0]=0;
     for(int i=1;i<=n;i++){
        ps2[i]=ps2[i-1]+a[i-1];
     }
     int t;
     cin >> t;
     while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(x==1){
            cout << ps1[z]-ps1[y-1] << endl;
        }
        else cout << ps2[z]-ps2[y-1] << endl;
     }

}