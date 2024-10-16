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
}
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void sum(string s){
}
void solve() {
    string s;
    cin >> s;
    ll sz=s.size(),sum=0,ans,cnt=0,c;
    for(int i=0;i<sz;i++){
        sum+=s[i]-'0';
    }if(sz==1){
        cout << 0 << endl;
    }
    else{
        cnt=1;
   while(sum>9){
        ans=sum;
        sum=0;
        cnt++;
    while(ans!=0){
        sum+=ans%10;
        ans/=10;
      }
    }
    
    cout << cnt << endl;
    }

}
int main()
{
     ios();
     solve();
}