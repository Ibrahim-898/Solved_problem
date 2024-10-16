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
    int n,cnt=0,ans=0;
    cin >> n ;
    vector<int> v(n),cs(n),fs(n),rs(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cs[0]=1;
    for(int i=1;i<n-1;i++){
        if(v[i]-v[i-1]>abs(v[i]-v[i+1])) cs[i]=1;
        else cs[i]=-1;
    }
    cs[n-1]=-1;
    fs[0]=0;
    for(int i=1;i<n;i++){
        if(cs[i-1]==1){
            fs[i]=fs[i-1]+1;
        }
        else{
            fs[i]=fs[i-1]+abs(v[i-1]-v[i]);
        }
    }
    rs[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(cs[i+1]==-1){
            rs[i]=rs[i+1]+1;
        }
        else{
            rs[i]=rs[i+1]+abs(v[i+1]-v[i]);
        }
    }
    int q;
    cin >> q;
    while(q--){
        int x,y;
       cin >> x >> y;
       if(y>x){
       cout << fs[y-1]-fs[x-1] << endl;
       }
       else{
        cout << rs[y-1]-rs[x-1] << endl;
       }
      
    
    
    } 
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