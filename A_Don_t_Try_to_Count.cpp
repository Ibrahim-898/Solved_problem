#include<bits/stdc++.h>
#include<string.h>
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
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
   int x,s,cnt=0;
   cin >> x >> s;
   string a,b,m;
   cin >>  a >> b;
   while(a.size()<=s){
    a+=a;
    cnt++; 
   }
   vector<string> v;
   if(a.size()==s+1){
    for(int i=0;i<s;i++){
    m=(a.substr(i,s));
    if(m.size()==s) v.push_back(m);
    }
    }
   for(auto u:v){
    cout << u << " ";
   }
   cout <<  endl;
}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
        cout << t << endl;
     solve();
     }
}