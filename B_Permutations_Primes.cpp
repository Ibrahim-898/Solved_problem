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
    int n;
    cin >> n;
    vector<int> v(n);
    if(n<3){
        for(int i=n;i>0;i--) cout << i << " ";
        cout << endl;
    }
    else
    {
    v[0]=3;
    v[n-1]=2;
    v[n/2]=1;
    int ans=4;
    for(int i=1;i<n-1;i++){
        if(i==n/2 )continue;
        else {
            v[i]=ans;
            ans++;
        }
    }
    for(auto u: v){
        cout << u << " ";
    }
    cout   << endl;
    }
    

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