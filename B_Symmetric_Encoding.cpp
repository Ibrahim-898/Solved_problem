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
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for(int i=0;i<n;i++) {
        st.insert(char(s[i]));
    }
    map<char,char> mp;
    while(!st.empty()){
       char x =  *st.begin();
       char y = *--st.end();
       mp[x]=y;
       mp[y]=x;
      // cout << x << " " << y << endl;
       if(st.size()>0) st.erase(st.begin());
       
       if(st.size()>0) st.erase(--st.end());
    }
    //cout << st.size() << endl;
    for(int i=0;i<n;i++){
        s[i]=mp[s[i]];
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