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
const int N=100;
void solve() {
    ll n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    if(n==1 && a[0][0]!=a[0][m-1]){
        cout << "NO" << endl;
        return;
    }
    if(n==1 && m==1){
        cout << "YES" << endl;
        return;
    }
    if(m==1 && a[0][0]!=a[0][n-1]){
        cout << "NO" << endl;
        return;
    }
    int cnt =1,cnt1=1;
    char ans,ans1;
    for(int i=0;i<m-1;i++){
        if(a[0][i]==a[0][i+1]){
            cnt++;
            ans = a[0][0];
        }
        if(a[n-1][i]==a[n-1][i+1]){
            cnt1++;
            ans1=a[n-1][i];
        }
    }
   // cout << cnt << " " << cnt1 << endl;
    if(cnt==m && cnt1==m && ans!=ans1){
        cout << "NO"<< endl;
        return;
    }
    cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i][0]==a[i+1][m-1]){
            cnt1++;
            ans=a[i][0];
        }
        if(a[i][m-1]==a[i+1][m-1]){
            cnt1++;
            ans=a[i][m-1];
        }
    }
     if(cnt==n && cnt1==n && ans!=ans1){
        cout << "NO"<< endl;
        return;
    }
    cout <<  "YES" << endl;


      
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