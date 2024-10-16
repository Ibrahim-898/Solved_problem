
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
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
const int N=52;
void solve() {
    string a,b,s,s1;
    cin >> a >> b;
    int asz=a.size(),bsz=b.size(),cnt=0;
    vector<string> v1,v2;
    for (int i = 0; i < asz; i++){
        for (int len = 1; len <= asz - i; len++)
            s= a.substr(i, len);
            v1.push_back(s);
            s.clear();
      }
       for (int j = 0; j< bsz; j++){
             for (int len = 1; len <= bsz-j; len++)
             s1=b.substr(j, len);
             v2.push_back(s1);
             s1.clear();
        }
    for(auto u:v2){
        cout << u << endl;
    }
    cout << endl;
    
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}