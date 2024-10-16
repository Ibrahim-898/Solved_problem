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
    int n,cnt=1;
    cin >>  n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int x= v[0],pass=1;
    for(int i=1;i<n;i++){
        if(v[i]%v[0]==0 || v[i]%x==0) cnt++;
        else if(pass){
            x=v[i];
            cnt++;
            pass=0;
        }
    }
    if(cnt==n) cout << "Yes" << endl;
    else cout << "No" << endl;   
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