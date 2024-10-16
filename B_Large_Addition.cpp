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
    ll x,n,cnt=0,m;
    cin >> x;
    n=x,m=x/2;
    string s;
    x/=2;
    while(x>0){
        int rem= x%10;
        //cout << rem << endl;
        s.push_back(rem+'0');
        x/=10;
        cnt++;
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<cnt;i++){
         if(s[i]<53) s[i]=53;
     }
    
    //cout << a << endl;
    stringstream ss(s);
    ll ans ;
    ss >> ans;
    //cout << ans << endl;
    ll res = n-ans;
    string a;
    while(res>0){
        int rem = res%10;
        a.push_back(rem+'0');
        res/=10;
    }
    reverse(a.begin(),a.end());
    for(int i=s.size()-1;i>=0;i--){
        
        if(a[i]<'5'){
            int x = (s[i]-'0')-5;
            a[i]=(a[i]-'0'+x)+'0';
            if(a[i]<'5') {
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
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}