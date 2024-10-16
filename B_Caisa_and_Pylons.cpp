
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=52;
void solve(){
    int n,eng=0,ans=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ans=v[0];
    for(int i=0;i<n-1;i++){
        if(v[i]-v[i+1]<0) {
            if(eng+v[i]-v[i+1]<0){
                ans+=abs(eng+(v[i]-v[i+1]));
                eng=0;
            }
            else eng+=v[i]-v[i+1];
        }
        else eng+=v[i]-v[i+1];
    }
    cout << ans << endl;
}
int main()
{
     ios();
     
     solve();
     
}