
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
int main()
{
    ios();
    int n;
    while(cin >> n){
        if(n==0) break;
        int x=n;
        if(n<0) n=-1*n;
     vector<int> primefactor;
     int lim=n;
    primegen(lim);
  
   if(x<0) primefactor.push_back(-1);
    for(auto u: prime){
        if(1LL *u*u>n) break;
        while(n%u==0)
        {
            primefactor.push_back(u);
            n/=u;
        }
    }
       if(n>1) primefactor.push_back(n);
    cout << x << " = " << primefactor[0];
    for(int i=1;i<primefactor.size();i++){
        cout << " x "  << primefactor[i];
    } 
    cout << endl;
    }
    
}

