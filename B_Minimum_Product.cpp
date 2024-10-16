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
const  ll N=1e12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {

    ll a,b,x,y,n,ans,ans1;
    cin >> a >> b >> x >> y >> n;
    if(a-x>=n){
        ans=(a-n)*b;
    }
    else 
    {
        if((b-y)>=n-(a-x)){
        ans=x*(b-(n-(a-x)));;
        }
        else  ans=y*x;
    }
     if(b-y>=n){
        ans1=a*(b-n);
    }
    else 
    {
        if((a-x)>=n-(b-y)){
        ans1=y*(a-(n-(b-y)));
        }
        else  ans1=y*x;
    }
    cout << min(ans,ans1) << endl;
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