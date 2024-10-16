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
    ll n,mex,mx=0;
    cin >> n;
    mex = n;
    vector<int> v(n);
    set<int> s;
    for(int i=0;i<n;i++){
        cin >> v[i];
        s.insert(v[i]);
    }
for(int i=0; i<n; i++){
   if(*s.begin()!=i){
    mex=i;
    break;
   }
   s.erase(s.begin());
}
 //cout << mex << endl;
    //cout << "&" << mex << endl;
    int j=0,k=0,cnt=0;
    set<int> st;
    vector<pair<int,int>> pr;
    for(int i=0;i<n;i++){
        if(v[i]<mex) {
            st.insert(v[i]);
            k=i;
        }
        //cout << mex << " *" << st.size() << endl;
        if(st.size()==mex){
            //cnt++;
            pr.push_back({j+1,k+1});
            j=i+1;
            k=i+1;
            st.clear();
        }
    }
    int sz = pr.size();
    if(sz==1 || mex==n) {
        cout << -1 << endl;
        return;
    }
    if( pr[sz-1].second!=n){
        pr[sz-1].second = n;
    }
     cout << sz << endl;
    for(auto u:pr){
        cout << u.first << " " << u.second << endl;
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