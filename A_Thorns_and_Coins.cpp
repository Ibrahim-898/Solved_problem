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
    int n,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@') cnt++;
        else if(s[i]=='*' && i<s.size()-1){
            if(s[i+1]=='@') {
                cnt++;
                i++;
            }
            else if(s[i+1]=='.') i++;
            else if(s[i+1]=='*') {
                cout << cnt << endl;
                return;
            }
        }
    }
    cout << cnt << endl;
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