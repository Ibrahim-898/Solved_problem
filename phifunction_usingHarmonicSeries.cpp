//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e6+7;
vector<int> phi(mx);
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
    for(int i=1;i<=n;i++){
        cout << phi[i] << " ";
    }
    cout << endl;

}
int main()
{
    int n;
    cin >> n;
    phiFunction(n);
}

