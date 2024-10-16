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
    string s;
    cin >> s;
    int zero =0,one =0,fnd,x;
   for(int i=0;i<s.size();i++){
    if(s[i]=='0') zero++;
    else one++;
   }
   if(zero<=one) {
    int i=0,cnt=0;
   while(cnt<zero){
    if(s[i]=='1') cnt++;
    i++;
   }
   cout << s.size()-i << endl;
   }
   else{
    int i=0,cnt=0;
   while(cnt<one){
    if(s[i]=='0') cnt++;
    i++;
   }
   cout << s.size()-i << endl;
   }
   
    
    
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