
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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll i=0,j=n-1,mul1=1,mul2=1;
    while(i<=j){
        if(mul1mul2) {
            mul1*=v[i];
            i++;
        }
        else {
            mul2*=v[j];
            j--;
        }
    }
    if(i==0) i=1;
    if(mul1==mul2) cout << i << endl;
    else cout << -1 << endl;
   
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