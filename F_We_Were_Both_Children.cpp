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
    int n,a,b,cnt=0,ans=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    cin >> v[i];
    }
    sort(v.begin(),v.end());
    int i=n+1,j;
    for(i=n;i>0;i--){
        cnt=0;
        int x=i;
        //cout << "*" <<  x << endl;
        for(j=0;j<n;j++){
            if(x%v[j]==0) {
                cnt++;
                ans=max(ans,cnt);
        }
         }
    }
    cout << ans << endl;
   

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