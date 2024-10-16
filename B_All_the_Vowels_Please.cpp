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
    int n,x=0,y=0;
    cin >>n;
    string s="aeiou";
    for(int i=5;i*i<=n;i++){
        if(n%i==0){
             x=i;
             y=n/i;
             break;
              }
    }
    if(x<5 || y<5) cout << -1 << endl;
    {
        for(int i=0;i<x;i++){
            int k=i%5;
            for(int j=0;j<y;j++){
                if(k==5) k=0;
                cout << s[k];
                k++;
            }
        }
    }

    
}
int main()
{
    ios();
    
        solve();

    
}