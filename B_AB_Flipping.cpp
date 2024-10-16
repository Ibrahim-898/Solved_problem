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
    int n,start =-1,end =-1;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++) {
        if(s[i]=='A'){
            start = i;
            break;
        }
    }
    for(int i=n-1;i>start;i--){
        if(s[i]=='B'){
            end = i;
            break;
        }
    }
    int ans = end-start;
    if(start==-1 || end == -1) ans =0;
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