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
    int n,d,c,sum=0;
    cin >> n >> c >> d;
    vector<int> v(n),b;
    int a[n][n];
    for(int i=0;i<n*n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    a[0][0]=v[0];
    b.push_back(v[0]);
    for(int i=0;i<1;i++){
        for(int j=1;j<n;j++){
            a[i][j]=a[i][j-1]+d;
            b.push_back(a[i][j]);
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            a[j][i]=a[j][i-1]+c;
            b.push_back(a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout << a[i][j] << " ";
        }
        cout << endl;
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