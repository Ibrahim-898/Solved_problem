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
    int n,a,b,sum=0,result=0,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
    cin >> a >> b;
    if(a<=10) sum=a+b;
    if(sum>ans) result=i;
    ans=sum;
    }
    cout << result << endl;
    
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