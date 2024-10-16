
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
   int n;
   cin >> n ;
   vector<ll> v(n);
   for(int i=0;i<n;i++){
    cin >> v[i];
   }
    int f=n-1,p=0,mn=1e9;
   sort(v.begin(),v.end());
   for(int i=0;i<n-1;i++){
    int m =abs(v[i]-v[i+1]);
    if(m<mn){
        mn = m;
        f=i;
    }
    }
   int j=f+2;
   cout << v[f] << " ";
   while(j<n){
    cout << v[j] << " ";
    j++;
   }
   int i=0;
   while(i<f){
    cout << v[i] << " ";
    i++;
   }
   cout << v[f+1] << endl;
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