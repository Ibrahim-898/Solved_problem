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
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
bool issorted( int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
ll f(ll f1,ll f2){
    f2= f2-f1;
}
void solve() {
    ll n,cnt=0;
    cin >> n;
    vector<int> v(n),a;
    for(int i=0;i<n;i++) cin >> v[i];
    int x=v[n-1];
    for(int i=n-2;i>=0;i--){
        
        if(v[i]>x){
            if(v[i]<10){
                cout << "NO" << endl;
                return;
            }
            if(v[i]%10>x || v[i]/10>v[i]%10){
                cout << "NO" << endl;
                return;
            }
            else if(v[i]%10<=x && v[i]/10<=v[i]%10){
                x=v[i]/10;
            }
        }
        else {
             x=v[i];

        }
    }
    cout << "YES" << endl;

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