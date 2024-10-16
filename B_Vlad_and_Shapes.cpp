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
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>  a[i][j];
        }
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(a[i][j]=='1'){
                cnt++;
            } 
        }
        if(cnt>0) v.push_back(cnt);
    }
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            cout << "TRIANGLE" << endl;
            return;
        }
    }
    cout << "SQUARE" << endl;
    
    
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