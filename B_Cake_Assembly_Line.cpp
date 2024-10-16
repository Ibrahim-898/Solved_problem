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
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
bool issorted( int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
ll f(ll f1,ll f2){
    f2= f2-f1;
}
void solve() {
    int n,w,h,dif,mx=0,y,f=1;
    cin >> n >> w >> h;
    //cout << n << " " << w << " " << h << endl;
    vector<pair<int,int>> a,b;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a.push_back({x-w,x+w});
    }
    
    for(int i=0;i<n;i++){
        int p;
        cin >> p;
        b.push_back({p-h,p+h});

    }
   
   /*for(int i=0;i<n;i++){
        a.push_back({v[i]+mx-w,v[i]+mx+w});
    }*/
    for(auto u:a){
        cout << u.first << "-" << u.second << " ";
    }
    cout << endl;
    for(auto u:b){
        cout << u.first << "-" << u.second << " ";
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