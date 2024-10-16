//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    ll n,k,g,div,ans=0;
    cin >> n >> k >> g;
    ll ttl=k*g;
    ld phdc =(ld)ttl/n;
    ll rem=(g-1)/2;
    if(phdc<=rem){
        ll saved=(n-1)*phdc;
        ll mod=(ttl-saved)%g;
        if(mod>rem){
            saved-=(ttl-saved)+g-mod;
        }
        else{
            saved+=mod;
        }
        cout << saved << endl;
    }
    else
    {
        ll saved=(n-1)*rem;
        ll mod=(ttl-saved)%g;
        if(mod>rem){
            ttl-=(ttl-saved)+g-mod;
            saved=ttl;

        }
        else{
            saved+=mod;
        }
        cout << saved << endl;

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