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
    char a[8][8];
    char ans='R';
    int cnt=0;
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<8;i++){
         cnt=0;
        for(int j=0;j<8;j++){
            if(a[j][i]=='B') cnt++;
           // cout << a[j][i] << " ";
        }
        if(cnt==8) ans='B';
    }
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