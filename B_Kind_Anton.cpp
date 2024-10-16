
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
    if(a.first!=b.first)
        return (a.first>b.first);
    else
        return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1);
    // ? :
}
const int N=52;
void solve() {
    int n,j,f=0;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    if(a[0]!=b[0]) {
        cout << "NO" << endl;
        return;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>b[i]){
            j=i-1;
            f=0;
            while(j>=0){
                if(a[j]==-1) {
                    f=1;
                    break;
                }
                if(b[j]==1){
                    f=1;
                    break;
                }
                j--;
            }
            if(f==0) {
                 cout << "NO" << endl;
                 return;
            }
        }
        else if(a[i]<b[i]){
            j=i-1;
            f=0;
            while(j>=0){
                if(a[j]==1) {
                    f=1;
                    break;
                }
                if(b[j]==-1){
                    f=1;
                    break;
                }
                j--;
            }
        
            if(f==0) {
                 cout << "NO" << endl;
                 return;
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}