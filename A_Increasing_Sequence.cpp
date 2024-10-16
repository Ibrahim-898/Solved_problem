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
void solve(){
    ll n;
     cin >> n;
     vector<ll> a(n),b(n);
     for(int i=0;i<n;i++) cin >> a[i];
     if(a[0]==1) b[0]=2;
     else b[0]=1;
     for(int i=1;i<n;i++){
        if(a[i]==b[i-1]+1){
            b[i]=b[i-1]+2;
        }
        else b[i]=b[i-1]+1;
     }
     cout << b.back() << endl;

    


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