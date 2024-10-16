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
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int i=0,j=0,ans=0,res=0;
    while(j<=i && i<n){
        if(ans>=l && ans<=r){
            res++;
            ans=0;
            j=i;
        }
        if(ans<l){
            ans+=v[i];
            i++;
        }
       while(ans>r){
           ans-=v[j];
           j++;
        }

    }
    if(ans>=l && ans<=r) res++;
    cout << res << endl;

    
    
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