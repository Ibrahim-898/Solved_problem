//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e6;
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
void solve(){
    int lim=1e6;
    primegen(lim);
    int n,a,b;
    while(cin >> n){
        if(n==0) break;
        for(auto u :prime){
             a=u;
            b=n-a;
            if(isprime[b]){
                cout << n << " = " <<  a << " + " << b << endl;
                break;
            }
        }
    }
}
int main()
{
    ios();
    solve();
}
