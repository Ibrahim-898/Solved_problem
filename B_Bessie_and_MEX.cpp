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
    int n,mx=-1,mex;
    cin >> n;
    vector<int> v(n),a;
      set<int> st;
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    if(v[0]<0) {
        a.push_back(abs(v[0]));
        mex = 0;
        mx = abs(v[0]);
    }
    else{
         a.push_back(0);
        mex = 1;
        mx = 0;
    }
   for(int i=1;i<n;i++){
    if(v[i]>0) {
        mex+=v[i];
    a.push_back(mex-v[i]);
   }
   else{
    a.push_back(mex-v[i]);
   }
   }
   for(auto u:a){
    cout << u << " ";
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