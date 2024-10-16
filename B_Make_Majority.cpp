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
    int n,cnt=0,one=0,zero=0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt++;
        else{
            v.push_back(1);
            if(cnt>=1) {
                v.push_back(0);

            }
            cnt=0;

        }
    }
    if(cnt>=1) v.push_back(0);
    for(auto u:v){
        if(u==1) one++;
        else zero++;
    }
    if(one>zero) cout <<"Yes" << endl;
    else cout << "No"<< endl;
    
    
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