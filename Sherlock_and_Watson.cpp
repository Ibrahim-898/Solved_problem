
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
const int mx=1e5+123;
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
    int lim=n;
    primegen(lim);
   
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
int main()
{
    ios();
    int lim=1e5;
    primegen(lim);
    int t;
    cin >> t;
    while(t--){
    int a,b;
    cin >> a >> b;
    int fa=1,fb=1;
    for(int i=1;i<=a;i++){
        fa*=2;
    }
    fa-=1;
    for(int i=1;i<=b;i++){
        fb*=2;
    }
    fb-=1;
    //cout << fa << " " << fb << endl;
   vector<int> v=primefactor(fa);
   vector<int>v1=primefactor(fb);
   int i=0,j=0,ans=0;
   while(i!=v.size() && j!=v1.size()){
    if(v[i]==v1[j]){
        ans++;
        i++;
        j++;
    }
    else if(v[i]<v1[j]) i++;
    else j++;
   }
   cout << ans <<endl;
   
    }
    
}

