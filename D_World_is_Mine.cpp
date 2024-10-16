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
    vector<int> v(n);
    set<int> st;
    for(int i=0;i<n;i++){
        cin >> v[i];
        st.insert(v[i]);
    }
    sort(v.begin(),v.end());
    int sz = st.size();
    int cnt =0,i=n-1;
    map<int,int> mp;
        while(mp.size() <(sz+1)/2 && i>=0){
            mp[v[i]]++;
            i--;
        
    }
    for(auto u:mp){
        cout<< u.first << " " << u.second << endl;
    }
    cout << endl;
    
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