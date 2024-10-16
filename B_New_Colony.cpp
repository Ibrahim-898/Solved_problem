
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
    int n,k,f=-1;;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
  for(int j=0;j<k;j++){
        f=-1;
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]) {
            v[i]+=1;
            f=i+1;
            break;
        }
    }
    if(f==-1) break;
    }
    cout << f << endl;
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