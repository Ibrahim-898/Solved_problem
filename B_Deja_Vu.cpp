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
    int n,q;
    cin >> n >>q ;
    vector<int> v(n),qr(31,0);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        if(qr[x]==0){
            ll div= pow(2,x);
            for(int i=0;i<n;i++){
            if(v[i]%div==0){
                ll add = pow(2,x-1);
                v[i]+=add;
            }
            }
            qr[x]=1;
        }
    }
        for(auto u:v){
            cout << u << " ";
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