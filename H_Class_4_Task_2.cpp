
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <assert.h>
#include <cstring>
#include <string>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <time.h>
#include <climits>
#include <bitset>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e7+123;
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
isprime[2]=1;
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(isprime[i]==1) prime.push_back(i);
}
}
vector<ll> primefactor(ll n){
vector<ll> factor;
    for(auto u: prime){
        if(1LL *u*u>n) break;
        if(n%u==0) factor.push_back(u);
        while(n%u==0)
        {

            n/=u;
        }
    }
       if(n>1) factor.push_back(n);
       
       return factor;
}
int main()
{
    ios();
    int lim=1e7;
    primegen(lim);
    ll n;
    while(cin >> n){
        if(n==0) break;
         n=abs(n);
            vector<ll> factor = primefactor(n);
            if(factor.size()<=1) cout << -1 << endl;
            else cout << factor[factor.size()-1] << endl; 
    
    
    } 
}

