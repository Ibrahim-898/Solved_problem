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
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
    vector<int> v(3);
    for(int i=0;i<3;i++) cin >> v[i];
    sort(v.begin(),v.end());
    if(v[1]%v[0]==0 &&  v[2]%v[0]==0){
        int ans=0;
        ans+=v[1]/v[0]-1;
        ans+=v[2]/v[0]-1;
        if(ans<=3) {
            cout << "YES" << endl;
        return;
        }
    }
    cout << "NO" << endl;
    
}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
     solve();
     }
}