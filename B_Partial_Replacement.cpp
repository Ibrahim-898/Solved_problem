
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
    int n,k,j,f=0,cnt=1,g=0,m=1e9;
    string s;
    cin >> n >> k;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='*') {
            f=i;
            break;
        }
    }
   for(int i=n-1; i>0; i--) {
        if(s[i]=='*') {
            g=i;
            break;
        }
    }
    if(f==g) {
        cout << cnt << endl;
        return;
    }
    int i;
    cnt=2;
    while(1) {
        j=i+k;
        if(j>=g) break;
        while(j>i && j<g) {
            if(s[j]=='*') {
                cnt++;
                i=j;
                m=j;
                break;
            }
            j--;
        }
    }
    //if(g-m>k) cnt++;
    cout<< cnt << endl;

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