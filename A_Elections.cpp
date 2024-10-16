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
    vector<int> v(3);
    int mx =0;
    bool cnt = false;
    for(int i=0;i<3;i++) {
        cin >> v[i];
        if(v[i]>mx) mx = v[i];
    }
    if(mx==0) {
        cout << 1 << " " << 1 << " " << 1 << endl;
        return;
    }
    for(int i=0;i<3;i++){
        int x = mx-v[i];
        if(x>=0 && cnt) cout << x+1 <<" ";
        else {
            cout << x << " ";
            cnt= true;
        }
    }
    cout << endl;
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