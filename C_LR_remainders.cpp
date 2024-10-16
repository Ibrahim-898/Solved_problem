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
    ll n,m,mul=1;
    cin >> n >> m;
    vector<ll> v(n),ans;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        x=x%m;
        v[i]=x;
        mul*=v[i];
    }
    string s;
    cin >> s;
    cout << mul%m <<" ";
   int j=0,k=n-1,i=0;
    while(i<n-1){
        if(s[i]=='L'){
            if(v[j]>0){
            mul/=v[j];
            j++;
            }
            else j++;
            cout << mul%m << " ";
        }
        else {
            if(v[k]>0) {
            mul/=v[k];
            k--;
            }
            else k--;
            cout << mul%m << " ";
        }
        i++;
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