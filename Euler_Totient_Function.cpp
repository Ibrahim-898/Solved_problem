//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e7;
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
vector<int> primefactor(int n){
vector<int> factor;
    for(auto u: prime){
        if(1LL *u*u>n) break;
        while(n%u==0)
        {
            factor.push_back(u);
            n/=u;
        }
    }
       if(n>1) factor.push_back(n);
       return factor;
}
ll phifunc(int n,set<int> &v){
    ll res=n;
    for(auto u:v){
       res/=u;
       res*=(u-1);
    }
    return res;
}
int main()
{
    ios();
    int lim=1e6;
    primegen(lim);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
     vector<int> factor=primefactor(n);
     set<int> st;
     for(auto u:factor){
        st.insert(u);
     }
     cout << endl;
    ll ans = phifunc(n,st);
    cout << ans << endl;
    }
    
}

