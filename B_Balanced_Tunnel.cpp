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
    int n,cnt=0;
    cin >> n;
    vector<int> v(n),a(n);
    queue<int> q;
    set<int> st;
    for(int i=0;i<n;i++) cin >> v[i];
     for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++){
        if(binary_search(st.begin(),st.end(),v[i])==0 && v[i]!=a[i]) {
            q.push(v[i]);
        }
        if(v[i]==a[i] && q.empty()) continue;
        if(a[i]!=q.front()) {
            cnt++;
            st.insert(a[i]);
        }
        else q.pop();
        
      }
      cout << st.size() << endl;

    
    
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