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
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
bool issorted( int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
ll f(ll f1,ll f2){
    f2= f2-f1;
}
void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    if( b%3!=0 && c<(3-b%3)){
        cout << -1 << endl;
        return;
    }
    ll x= a+(b+c)/3;
    if((b+c)%3!=0) x++;
    cout << x << endl;
   
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