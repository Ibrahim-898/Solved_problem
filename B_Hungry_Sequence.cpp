//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e7;
bitset<mx> isprime;
int  prime[mx];
int main()
{
    ios();
    for(int i=3;i<=mx;i+=2) {
        isprime[i]=1;
}
for(int i=3;i<=sqrt(mx);i+=2){
    if(isprime[i]){
    for(int j=i+i;j<=mx;j+=i){
        isprime[j]=false;
    }
    }
}
int j=0;
for(int i=3;i<=mx;i+=2){
    if(isprime[i]==1) {
        prime[j]=i;
        j++;
    }
}
    int n,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cnt++;
        cout << prime[i] << " ";
    }
    cout << endl;
}

