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
    vector<int> v(n),a(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    for(int i=n-2;i>=0;i--){
        while(v[i]>=v[i+1] && v[i]>0){
            v[i]=v[i]/2;
            cnt++;
        }
        cout << "*" << i << endl;
        if(v[i+1]==0) {
            cout << -1 << endl;
            return;
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