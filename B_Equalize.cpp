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
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    int n,cnt=1,f=0,ans=1;
    cin >> n ;
    set<int> st;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
      for(auto u:st){
        v.push_back(u);
        
      }
      int p=0,q=1;
      while(q<v.size()){
        if(v[q]-v[p]<n )
        {
            if(q==v.size()-1){
                if(p==0) ans=v.size();
                else {
                     ans=max(ans,q+1-p);
                }

            }
            q++;
        }

        else {
            ans=max(ans,q-p);
            p++;
        }
      }
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