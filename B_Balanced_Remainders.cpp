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
}
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
    int n,c0=0,c1=0,c2=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]%3==1) c1++;
        else if(v[i]%3==2) c2++;
        else c0++; 
    }
    int sz=n/3,ans=0;
    while(c0>sz){
        while(c1<sz && c0>sz){
            ans++;
            c1++;
            c0--;
            
        }
        while(c2<sz && c0>sz){
            ans+=2;
            c2++;
            c0--;
        }
        
    }
    while(c2>sz){
        while(c1<sz && c2>sz){
            ans+=2;
            c1++;
            c2--;
        }
        while(c0<sz && c2>sz){
            ans++;
            c0++;
            c2--;
        }
        
    }
    while(c1>sz)
    {
        while(c2<sz && c1>sz){
            ans++;
            c2++;
            c1--;
        }
        while(c0<sz && c1>sz){
            ans+=2;
            c0++;
            c1--;
        }
    }
    cout << ans << endl;
   

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