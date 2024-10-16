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
   // cout << s[0] << endl;
    vector<int>  v={19,23,31,41,53,61,79,89,97};
    for(int i=0;i<9;i++){
        if(s[0]-'0'==i+1) {
            cout << v[i] << endl;
            return;
        }
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