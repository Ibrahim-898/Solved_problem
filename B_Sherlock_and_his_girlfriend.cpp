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
isprime[2]=1;
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(isprime[i]==1) prime.push_back(i);
}
}
int main()
{
    int x=1e6;
    primegen(x);
    int n;
    cin >> n;
    if(n<3) {
        cout << 1 << endl;
        for(int i=0;i<n;i++) {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 2 << endl;
    for(int i=2;i<=n+1;i++){
        if(isprime[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
    }
}