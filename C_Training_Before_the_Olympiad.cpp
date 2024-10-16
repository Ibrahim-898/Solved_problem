
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
const int N=100;
void solve() {
    ll n,cnt=0,sum=0;
    cin >> n ;
    vector<int> v(n);
    for(int i=0;i<n;i++)  cin >> v[i];
    cout << v[0] << " ";
    sum+=v[0];
    if(v[0]%2) cnt++;
    for(int i=1;i<n;i++){
        if(v[i]%2) cnt++;
        sum+=v[i];
        if((sum-(cnt/3))%2)cout << sum-(cnt/3)-1 << " ";
        else cout << sum-cnt/3 << " ";
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