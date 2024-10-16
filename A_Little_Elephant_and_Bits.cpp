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
    
    int f=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') {
            s.erase(s.begin()+i);
            f=0;
        break;
        }
    }
    if(f) s.erase(s.begin());
    cout << s << endl;
    
    
}
int main()
{
    ios();
    
        solve();

    
}