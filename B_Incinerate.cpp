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
    int n,k;
    cin >> n >> k;
    vector<int > a(n),b(n);
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++){
        p[i]={a[i],b[i]};
    }  
    sort(p.begin(),p.end(),cmp);
    sort(a.begin(),a.end());
    for(int i=n-2;i>=0;i--){
        p[i].second= min(p[i].second,p[i+1].second);
    }  
    int x = k,i=0;
    while(k>0){
        int it = upper_bound(a.begin()+i,a.end(),x)-a.begin();
        i=it;
        //cout <<it << " " <<  "*" <<  k << endl;
        if(it==n && k>0){
            cout << "YES" << endl;
            return;
        }
        k-=p[it].second;
        x+=k;

    }
    //cout << x << endl;
    cout << "NO" << endl;
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