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
const int N=100;
void solve() {
    ll n,k,sum=0;
    cin >> n >> k;
   
    vector<int> ans(n,0);
    if(n%2){
        for(int i=0;i<n;i+=2){
            sum+=i;

        }
    }
    else{
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    }
    sum*=2;
    if(k%2 || k>sum || n==1 && k!=0){
        cout << "No" << endl;
        return;
    }
     int i=n-1,j=0;
    while(k>0 && j<=i){
        if(k>=(2*(i-j))){
            ans[i]=j+1;
            ans[j]=i+1;
            k-=(2*(i-j));
        }
        else {
                ans[i]=i+1-(k/2);
                ans[i-(k/2)]=(i+1);
                k=0;
        }
        i--;
        j++;

    }
    for(int i=0;i<n;i++){
        if(ans[i]==0) ans[i]=i+1;
    }
    cout << "Yes" << endl;
    for(auto u:ans){
        cout << u << " ";
    }
    cout << endl;
    
    
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}