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
    int n,mn=1e9;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    cin >> v[i];
    }
    for(int i=0;i<n-1;i++){
        int dif=v[i+1]-v[i];
        if(dif>=0) {
            mn=min(mn,dif);
        }
        else{
            cout << 0 << endl;
            return;
        }
    }
    cout << (mn/2)+1 << endl;
   

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