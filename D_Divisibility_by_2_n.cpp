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
    ll n,two=0,m;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++){
        while(v[i]%2==0){
            two++;
            v[i]/=2; 
        }
    }
   // cout << two << endl;
     ll ans = two/2+1;
    m=n;
    int mx=int(log(n)/log(2));
    if(two>=n) cout << 0 << endl;
    else{
        ll need = n-two,i=mx,res=0;
        if(need>(mx*(mx+1)/2)) {
            cout << -1 << endl;
            return;
        }
        while(need>0 && i>0){
            if(i<=need){
                res++;
                need-=i;
            }
            i--;
        }
        cout<< res << endl;


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