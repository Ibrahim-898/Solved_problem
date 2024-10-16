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
    int a,b,c;
    cin >> a >> b  >> c;
    vector<int > v(3,0);
    if((a+b)%2==0) v[2]=1;
    if((a+c)%2==0) v[1]=1;
    if((b+c)%2==0) v[0]=1;
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