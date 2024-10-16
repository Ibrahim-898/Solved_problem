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
int nod(int n){
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
       return nod;
}
int main()
{
    ios();
    int lim=1e7;
    primegen(lim);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
        cout << nod(n) << endl;
    }
    
}

