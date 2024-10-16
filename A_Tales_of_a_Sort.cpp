
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
    int n,mx=0,ans,flag=0,f=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    mx=*max_element(v.begin(),v.begin()+(n-1));
    for(int i=0;i<n;i++){
        if(v[i+1]<=v[i]) {
            flag=1;
            break;
        }
    }
   // cout << flag << "*" << endl;
    if(v[n-1]<mx){
        cout << mx << endl;
        return;
    }
    for(int i=n-1;i>0;i--){
        if(v[i]<v[i-1]){
            f=i-1;
            break;
        }
    }
    mx=*max_element(v.begin(),v.begin()+f);
    if(flag) 
    cout << mx << endl;
    else cout << 0 << endl;
    
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