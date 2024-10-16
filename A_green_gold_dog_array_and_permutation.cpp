#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first>=b.first) return true;
    return false;
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
     int n;
    cin >> n;
    vector<int> v(n),ans(n+1);
     vector< pair<int,int>> pr(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        pr[i]=make_pair(v[i],i+1);
    }
    sort(pr.begin(),pr.end(),cmp);
    int i=1;
    for(auto u:pr){
        ans[u.second]=i;
        i++;
    }
    for(int i=1;i<=n;i++){
        cout<< ans[i] << " ";
    }
    cout << endl;  
    
    }
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}