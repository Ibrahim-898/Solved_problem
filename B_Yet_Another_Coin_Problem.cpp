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
    ll n,cnt=0,ans=0;
    cin >> n ;
    //cout << n << endl;
    ans+=n/15;
    n=n%15;
    if( (n==2||n==5||n==8) && ans>0){
        ans--;
        //cout << n << " " << ans << endl;
        n+=15;
    }
    ans+=n/10;
    n=n%10;
    if((n==2 || n==8) && ans>0){
        ans--;
        n+=10;
    }
    ans+=n/6;
    n=n%6;
    if(n==5 && ans>0){
        ans--;
        n+=6;
    }
    ans+=n/3;
    n=n%3;
   // cout << "*" << ans  << " " << n << endl;
    ans+=n;
    cout <<ans << endl;

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