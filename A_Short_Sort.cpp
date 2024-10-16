#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
void solve(){
    string s;
    cin >> s;
    int f=0;
    if(s[1]=='b'){
        if(s[0]=='c' || s[0]=='a') f=1;
    }
    else if(s[1]=='c'){
        if(s[2]=='b') f=1;
    }
    else if(s[1]=='a'){
        if(s[0]=='b') f=1;
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
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