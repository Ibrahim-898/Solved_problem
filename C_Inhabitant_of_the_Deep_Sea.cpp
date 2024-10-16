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
    ll n,k,cnt=0;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll i=0,j=n-1;
    while(i<=j){
        int mn=min(v[i],v[j]);
        if(i==j && k>=mn) {
            cnt++;
            i++;
            cout << cnt << endl;
            return;
        }
        if(k>=(2*mn)){
            k-=(2*mn);
            if(v[j]== mn && v[i]==mn && i!=j){
                cnt+=2;
                i++;
                j--;
            }
           else if(v[i]==mn){
                i++;
                cnt++;
                v[j]-=mn;
            }
            else if(v[j]==mn){
                j--;
                cnt++;
                v[i]-=mn;
            }
        }
        else if(k==(2*mn-1)){
            if(mn==v[i]){
                i++;
                cnt++;
                v[j]-=(mn-1);
                k-=(mn*2-1);
            }
            else {
               break;
            }
           
           
            
        }
        else break;
      
    }
    cout << cnt << endl;
    

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