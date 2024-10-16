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
const int N=100;
void solve() {
    int n,rem=0;
    cin >> n;
    vector<int> v(n);
   for(int i=0;i<n;i++) cin >>  v[i];
   sort(v.begin(),v.end());
   int cnt = 1,x=v[0];
   for(int i=1;i<n;i++){
    if((v[i]-x)<=0) continue;
    else{
       // rem = v[i]-x;
        x+=(v[i]-x);
        cnt++;
        cout  << x << " " << cnt << "  " ;
    }
   }
   cout << endl;
 //  cout << cnt << " " << rem <<   endl;

   // cnt++;
   if(cnt%2) cout << "Alice" << endl;
   else cout << "Bob" << endl;

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