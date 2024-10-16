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
    vector<int> v(3);
    for(int i=0;i<3;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int k = 5,i=0,mx = v[2];
    while(k>0){
        while(v[0]<v[1] && k>0){
        v[i]++;
        k--;
        }
        if(v[2]==v[1] && k>0){
            v[2]++;
            k--;
        }
        else if(v[2]>v[1] && k>0){
            v[1]++;
            k--;
        }
    }
    int res=1;
    for(auto u:v){
        res*=u;
    }
    cout << res << endl;

    
    
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