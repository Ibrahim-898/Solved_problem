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
    int n,x,f=1;
    cin >> n;
    x=n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(n%2) n--;
    for(int i=0;i<n;i+=2){
        if(v[i]!=v[i+1]){
            f=0;
            cout << -1 << endl;
            return;
        }
    }
    if(x%2 && f) {
        if(v[x-1]!=v[0]) {
            cout << -1 << endl;
            return;
        }
        else {
            cout << x << " ";
            for(int i=0;i<n;i++){
                cout << i+1 << " ";
            }
            cout << endl;
            return;
        }

    }
    for(int i=0;i<n;i+=2){
        cout << i+2 << " " << i+1 << " ";
    }
    cout << endl;

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
