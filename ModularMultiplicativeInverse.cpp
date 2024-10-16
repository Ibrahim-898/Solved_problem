#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int binaryExpo(int a,int b){
    if(b==0) return 1;
    int res = binaryExpo(a,b/2);
    if(b&2) return (a*(res*res)%M)%M;
    else return (res*res)%M;
}
const int N = 1e6+7;
long long fact[N];
int factorial(int n){
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]=(fact[i-1]*i*1LL)%M;
    }

}
int main(){
    int a;
    cin >> a;

}