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
    vector<int> v(n);
    set<int> st;
    for(int i=0;i<n;i++)  cin >> v[i];
    sort(v.begin(),v.end());
     for(int i=0;i<n;i++)  st.insert(v[i]);
    while(!st.empty()){
        int x = *st.rbegin();
        st.erase(*st.rbegin());
       if(x%2==0) {
        st.insert(x/2);
        cnt++;
       }
        
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