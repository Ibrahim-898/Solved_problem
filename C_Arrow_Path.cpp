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
bool issorted(int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]!=a[i+1] || a[i]+1!=a[i+1]){
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
    ll n,cnt=0,ans=0;
    cin >> n;
    string a,b,s;
    cin >> a >> b;
    for(int i=0;i<n-2;i++){
        if(a[i]=='>' || b[i]=='>') s.push_back('>');
        else{
            cout << "NO" << endl;
            return;
        }
        
    }
    if(b[n-2]=='>') {
        s.push_back('>');
    }
    if(s.size()==n-2) cout << "YES" << endl;
    else cout << "NO" << endl;

   
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