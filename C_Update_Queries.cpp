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
    string s,c;
    cin >> n  >>m >> s;
    set<int> st;
    for(int i=0;i<m;i++){
        int x;
        cin>>  x;
        st.insert(x);
    }
    cin >> c;
    sort(c.begin(),c.end());
    int sz = st.size();
    int mn = min(sz,n),i=0;
    for(auto u:st){
        s[u-1]=c[i];
        i++;
        if(i==mn) break;

    }
    cout << s << endl;

    
    
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