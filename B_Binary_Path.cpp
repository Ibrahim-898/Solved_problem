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
bool issorted(int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    ll n,cnt=1,f=0;
    cin >> n ;
    string a,b,s;
    cin >> a >> b;
    s.push_back(a[0]);
    for(int i=0;i<n-1;i++){
        if(a[i+1]==b[i]) {
            s.push_back(a[i+1]);
            cnt++;
        }
        else if(b[i]=='0' && a[i+1]=='1')
        {
            int j=i;
        while(j<n-1){
            s.push_back(b[j]);
            j++;
        }
        break;
        }  
        else{
            s.push_back(a[i+1]);
            cnt=1;
        }
    }
    s.push_back(b[n-1]);
   cout << s << endl;
   cout << cnt << endl;

    
    
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