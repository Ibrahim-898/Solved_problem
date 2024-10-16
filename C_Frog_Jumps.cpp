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
    string a,b;
    
    cin >> b;
    //cout<< b << endl;
    if(b[b.size()-1]!='R') b.push_back('R');
    int i=0,cnt=0,ans=0;
    while(i<b.size()){
        while(b[i]!='R') {
            cnt++;
            i++;
        }
        cnt++;
        i++;
            ans=max(ans,cnt);
            cnt=0;  
    }
    cout << ans << endl;
    
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