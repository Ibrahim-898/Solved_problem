//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=5e6+7;
vector<unsigned long long> phi(mx);
void phiFunction(int n){
    for(int i=1;i<=n;i++) phi[i]=i;
    for(int i=2;i<=n;i++){
        if(phi[i]==i){
           int p=i;
           for(int j=p;j<=n;j+=p){
            phi[j]/=p;
            phi[j]*=(p-1);
           }
        }
    }
    for(int i=1;i<=n;i++) phi[i]*=phi[i];
    for(int i=1;i<=n;i++){
        phi[i]+=phi[i-1];
    }
}
int main()
{
    int lim=5e6;
    phiFunction(lim);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++) {
        ll a,b,ans=0;
        cin  >> a >> b;
        cout << "Case " << i << ": " << phi[b]-phi[a-1]<< endl;
    }
}

