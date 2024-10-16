//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e7;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
bitset<mx> isprime;
vector<int> prime;
void primegen(int n)
{
for(int i=3;i<=n;i+=2) {
        isprime[i]=1;
}
for(int i=3;i<=sqrt(n);i+=2){
    if(isprime[i]){
    for(int j=i+i;j<=n;j+=i){
        isprime[j]=false;
    }
    }
}
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(isprime[i]==1) prime.push_back(i);
}
}
vector<int> nod(int n){
    vector<int> nd;
    int nod=1;
    for(auto u: prime){
        int cnt=1;
        if(1LL *u*u>n) break;
        while(n%u==0)
        {
            n/=u;
            cnt++;
        }
        nod*=cnt;
    }
       if(n>1) nod*=2;
        nd.push_back(nod);
        return nd;
}
void solve(){
    
}
int main()
{
    ios();
    int lim=1e6;
    primegen(lim);
    vector<int> v(1002);
    for(int i=1;i<=1000;i++) v[i]=0;
    for(int i=1;i<=1000;i++){
        for(int j=i*i;j<=1000;j+=i){
            v[j]++;
        }
    }
    vector<pair<int,int>> pr;
    for(int i=1;i<=1000;i++){
        pr.push_back({v[i],i});
    }
    for(auto u:v){
        cout << u << " ";
    }
    cout << endl;
    sort(pr.begin(),pr.end());
    vector<int> ans;
    for(auto u : pr){
        ans.push_back(u.second);
    }
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin>> n;
       // cout << ans[n-1] << endl;
    }
    
}

