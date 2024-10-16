//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
     int  n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>> v[i];
        mp[v[i]]++;
    }
    int mx=*max_element(v.begin(),v.end());
    int flag=0;
    for(int i=1;i<=mx;i++){
        if( mp[i]>mp[i-1]) {
            cout << "NO" << endl;
            return;
        }
    }
     cout << "YES" << endl;
}
int main()
{
    ios();
    int t;
    cin >>  t;
    while(t--){
        solve();

    }
}