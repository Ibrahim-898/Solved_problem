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
    string s;
    cin >> s;
    ll sz=s.size(),ans=0;
    ll x=-1;
  //  cout << x << endl;
    for(int i=0;i<sz;i++){
        if(s[i]=='1' && x==-1){
            x=i;
        }
        if(s[i]=='0' && (x<i && x>=0)){
            ans+=(i-x)+1;
            x++;
            //cout << x << " " << ans << endl;
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