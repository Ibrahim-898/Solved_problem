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
   ll n,cnt=0,cntm=0,j=0;
   cin >> n;
   vector<ll> v(n);
   for(int i=0;i<n;i++)  cin >> v[i];
   for(int i=0;i<n-1;i++){
    if(v[i]>v[i+1]){
        j=i;
        while(j<(n-1) && v[j]>v[j+1])
        {
            if( (v[j]+v[j+1])%2==1) {
            swap(v[j],v[j+1]);
           
             }
         else{
            cout << "No" << endl;
            return;
        }
        j++;
    
   }
   }
   }
    cout << "Yes" << endl;
   
   
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