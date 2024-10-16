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
    int n,m,k,i=0,cnt=1,j=0,p=0,swim=0;
    cin >> n  >> m >> k;
    string s;
    cin >> s;
    while(i<n){
        while(cnt<m && i<n){
            if(s[i]=='L'){
                cnt++;
                j=i;
            }
            else if(s[i]=='W'){
                swim++;
                cnt++;
                p=i;
            }
            i++;
        }
        cout << cnt << " " << swim << " " << i << endl;
        if(cnt==1 && swim<=k){
            i=p;
        }
        if( cnt==1 && swim>k){
            cout << "NO" << endl;
            return;
        }
        else if(cnt>1 && swim<=k){
            i=j;
            cnt=1;
        }
        cout << i << endl;
        break;
    }
    cout << i << endl;
    
    
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