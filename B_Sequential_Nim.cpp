#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
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
void solve(){
    int n,flag=-1;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]>1 && flag==-1) flag =i+1;
    }
if(flag==-1) {
    if(n%2)  cout << "First" << endl;
    else cout << "Second" << endl;
}
else{
    if(flag%2) cout << "First" << endl;
   else cout << "Second" << endl;
}
    
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