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
bool issorted(int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]!=a[i+1] || a[i]+1!=a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    ll n,q,cnt=0,extra=0;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++) mp[s[i]]++;
    for(auto u:mp){
        if(u.first-64<=u.second)
        cnt++;
    }
    cout << cnt << endl;
   
        
   

    
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