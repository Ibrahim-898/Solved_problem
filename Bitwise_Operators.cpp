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
    int n,k,xorans=0,andans=0,orans=0;
    cin >> n  >> k;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int andd = (i&j);
            int orr = (i|j);
            int xorr = (i^j);
            if(andd<k && andd>andans){
                andans=andd;
            }
             if(orr<k && orr>orans){
                orans=orr;
            }
             if(xorr<k && xorr>xorans){
                xorans=xorr;
            }
        }
    }
    cout << andans << endl;
    cout << orans << endl;
    cout << xorans << endl;
    
    
}
int main()
{
    ios();
    // int  t;
    // cin >> t;
    // while(t--){
        solve();

    //}
}