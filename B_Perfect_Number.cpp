#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void solve() {
    int k,ans,cnt=0;
    cin >> k;
    vector<int> v;
    for(int i=19;cnt!=k;i+=9){
         int x=i,sum = 0;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        if(sum==10) { ans=i;
            cnt++;
        }
    }
    cout << ans << endl;

}
int main()
{
     ios();
     solve();
     
}