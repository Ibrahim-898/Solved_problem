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
     int n;
     cin >> n;
     string s,a;
     cin >> s;
     a.push_back(s[0]);
     for(int i=0;i<n-1;i++){
        if(s[i+1]<=s[i]) {
            a.push_back(s[i+1]);
        }
        else {
            break;
        }
     }
     s.clear();
     s =  s + a;
    reverse(a.begin(),a.end());
    s = s+a;
    cout << s << endl;
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