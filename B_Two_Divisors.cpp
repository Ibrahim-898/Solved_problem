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
    int a,b,x,mul=1;
    cin >> a >> b;
    if(a==1) {
        cout << b*b << endl;
        return;
    }
        int ans=b,i=2;
        while(i<=a){
            ans=ans*i;
            if(ans%a==0 && (ans/a)<=a) {
                cout << ans << endl;
                return;
            }
            ans/=(i-1);
            i++;
        }
        cout << a*b << endl;
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