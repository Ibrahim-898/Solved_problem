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
    ll n,c,d,i=1,mis=0;
    cin >> n >> c >> d;
    vector<int> v;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        st.insert(x);
    }
   for(auto u:st){
    v.push_back(u);
   }
    ll add=0,j=2,remove=0,sz=v.size();
    ll ans=((v[sz-1]-sz)*d)+((n-sz)*c);
    //cout << ans << endl;
   for(int i=1;i<sz-1;i++){
    if(v[i]!=j){
        ans=min(ans,(sz-i)*c);
        add+=((v[i]-v[i-1])-1);
        remove=sz-(i+1);
       // cout << "* " <<  remove << endl;
        ans=min(ans,(add*d)+(remove*c));
        j=v[i]+1;
    }
   }
   // ans=min(ans+(add*d),ans+d);
   cout << ans << endl;
    
    
    
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