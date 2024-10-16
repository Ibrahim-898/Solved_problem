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
    int n,m;
    cin >> n >> m;
    vector<int> v(n),ans(n);
    set<int> st;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=n-1;i>=0;i--){
        st.insert(v[i]);
        ans[i]=st.size();
    }
    while(m--){
        int x;
        cin >> x;
        cout << ans[x-1] << endl;
    }
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();

    }
}