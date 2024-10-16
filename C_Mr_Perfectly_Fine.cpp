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
    int n,mn1=1e6,mn2=1e6,mn3=1e6;
    cin >> n ;
    while(n--){
        int m;
        string s;
        cin >> m >> s ;
        //cout << m << " " <<  s[0] << " " << s[1] << endl;
        if(s[0]=='0' && s[1]=='1')  mn1=min(mn1,m);
         else if(s[0]=='1' && s[1]=='0')  mn2=min(mn2,m);
         else if(s[0]=='1' && s[1]=='1')  mn3=min(mn3,m);
    }    
    int ans=mn1+mn2;
    int sol=min(ans,mn3);
    if(sol==1e6) sol=-1;
    cout << sol  << endl;

}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}