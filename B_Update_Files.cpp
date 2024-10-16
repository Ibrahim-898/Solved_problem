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
    ll n,k,x=0,comp=0,time=0;
    cin >> n >> k;
    x=n-1;
    ll i=1,conect=1;
    while(x>0 && conect<=k){
        x-=conect;
        conect*=2;
        time++;
    }
   if(x>0){
     time+=x/k;
     if(x%k!=0) time++;
   }
    cout << time << endl;

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