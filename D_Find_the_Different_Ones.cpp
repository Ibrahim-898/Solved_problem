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
    int n,cnt=1,ans=1,l,r;
    cin >> n ;
    vector<int> v(n),a(n,0);
    for(int i=0;i<n;i++) cin >> v[i];
      for(int i=1;i<n;i++){
       if(v[i]!=v[i-1]) {
           a[i-1]=1;
        }
      }
      for(auto u:a){
        cout << u << " ";
      }
      cout << endl;
      int qr;
      cin >> qr;
      while(qr--){
        int p,q;
        cin >> p >> q;
         bool f=true;
         l=p-1,r=q-1;
        while(l<r){
            //cout << l << " " << r << endl;
            if(a[l]==1)
             {
                cout << l+1 << " " << l+2<< endl;
               f=false;
               l=r;
            }
            l++;
        }
         if(f==true) cout << -1  << " " << -1 << endl;
      }
      cout << endl;
      a.clear();
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