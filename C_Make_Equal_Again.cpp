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
    int n,i,j,cnt=1,ans=1;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)  cin >> v[i];
       for( i=1;i<n;i++){
       if(v[i]==v[i-1]) cnt++;
       else break;
       }
       for(int i=n-1;i>0;i--){
        //cout << i << " ";
       if(v[i]==v[i-1]) ans++;
       else break;
       }
       if(cnt==n) {
        cout << 0 << endl;
        return;
       }
      // cout << "*" <<  cnt << endl;
       if(v[0]==v[n-1]){
        cout << n-(cnt+ans) << endl;
        return;
       }
       cout << n-max(cnt,ans) << endl;
       
    
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