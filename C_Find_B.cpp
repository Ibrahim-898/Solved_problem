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
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n),ps(n+1),one(n+1);
    ps[0]=0;
    one[0]=0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        ps[i+1]=ps[i]+v[i];
        if(v[i]!=1) {
            one[i+1]=one[i];
        }
        else one[i+1]=one[i]+1;
    }
    while(q--){
    ll m,n,x;
    cin >> m >> n;
    if(m==n){
        cout << "NO" << endl;
        continue;
    }
    ll cntone =one[n]-one[m-1];
    ll rem = n-m+1-cntone;
     if(rem>0) x=((ps[n]-ps[m-1])-2*(one[n]-one[m-1]))/rem;
    if(x>=1 && m!=n) cout << "YES" << endl;
    else cout << "NO" << endl;
    }

    
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