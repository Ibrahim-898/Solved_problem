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
    vector<int> a(n),b(m);
    multiset<int> st;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a.begin(),a.end());
    for( int i=0;i<m;i++){
        auto  it = st.lower_bound(b[i]);
        if((*it)==b[i]){
            cout << *it << endl;
           // cout << *(a.begin()+(it-a.begin())) << endl;
            st.erase(it);
        }
        else{
             if(it == st.begin()) {
                cout << -1 << endl;
             }
             else cout << *(--it) << endl;
            st.erase(it);
        }
    }  
}
int main()
{
    ios();
    // int  t;
    // cin >> t;
    // while(t--){
        solve();
 
    //}
}