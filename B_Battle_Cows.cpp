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
    int n,k,f=1,x,cnt1=0;
    cin >> n >> k;
    x=k-1;
    k--;
    vector<int>v(n),a(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];   
        a[i]=v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>v[k] && i<k){
            swap(v[i],v[k]);
            f=0;
            k=i;
            break;
        }
    }
    if(f){
        swap(v[0],v[k]);
        k=0;
    }
    int mx=max(v[0],v[1]),cnt=0;
    if(mx==v[k]) cnt++;
    for(int i=2;i<n;i++){
        mx=max(mx,v[i]);
        if(mx==v[k] && i>=k){
            cnt++;
        }
        else if(mx!=v[k] && i>=k){
           break;
        }
    }
    swap(a[0],a[x]);
    x=0;
    int mx1=max(a[0],a[1]);
    if(mx1==a[x]) cnt1++;
    for(int i=2;i<n;i++){
        mx1=max(mx1,a[i]);
        if(mx1==a[x] && i>=x){
            cnt1++;
        }
        else if(mx1!=a[x] && i>=x){
            break;
        }
    }
   // cout << cnt << " " << cnt1 << endl;
    cout << max(cnt,cnt1) << endl;
  
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