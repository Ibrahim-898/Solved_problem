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
const int N=1000;
int C[N][N];
void solve() {
    int n;
    cin >> n;
    for (int n = 0; n < N; n++) { 
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; k++) 
            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
    }
     C[1][2] = C[1][1]+C[0][1];
     cout << C[0][1] << endl;
    // for (int n = 0; n < N; n++) { 
    //     for (int k = 1; k < n; k++) 
    //        cout << C[n][k] << " ";
    // }
    // cout << endl;
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();

    }
}