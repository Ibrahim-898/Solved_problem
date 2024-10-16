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
    ll n,k,x,sum=0,cnt=0;
    cin >> n ;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin  >> v[i];
        sum+=v[i];
    }
    if(sum%3==0) cout << 0 << endl;
    else
    {
        if(3-sum%3==1) cout << 1 << endl;
        else
        {
            for(int i=0;i<n;i++){
                if(v[i]%3==1) {
                    cout << 1 << endl;
                    return;
                }
            }
            cout << 2 << endl;
        }
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