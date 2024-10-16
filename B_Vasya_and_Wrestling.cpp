//Template 
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
    ll n,first=0,second=0;
    cin >> n;
    vector<int> v(n),a,b;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]>0) {
            first+=v[i];
            a.push_back(v[i]);
        }
        else {
            second+=abs(v[i]);
            b.push_back(v[i]);
        }
    }
    if(first>second) cout << "first" << endl;
    else if(first<second) cout << "second" << endl;
    else
    {
        for(int i=0;i<a.size();i++){
            if(a[i]>abs(b[i])) {
                cout << "first" << endl;
                return;
            }
            if(a[i]<abs(b[i])) {
                   cout << "second" << endl;
                   return;
            }
        }
            if(v[n-1]>0) cout << "first" << endl;
            else cout << "second" << endl;
    }
    
    
    
}
int main()
{
    ios();
    
        solve();

}