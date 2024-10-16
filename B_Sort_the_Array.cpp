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
    ll n,chk=1,l=-1,r=-1,in=1;
    cin >> n ;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]) {
                if(in) { l=i-1;
                in=0;
             }   
         }
         else{
            if(!in) {
                r=i-1;
                break;
             }
         }
    } 
    if(r==-1 && l>-1) r=n-1;
    if(l==-1 && r==-1) {
        l=0; 
        r=0;
    }
   reverse(v.begin()+l,v.begin()+r+1);
   for(int i=1;i<n;i++){
    if(v[i]<v[i-1]) {
        chk=0;
        break;
    }
   }
   if(chk) {
    cout << "yes" << endl;
    cout << l+1 << " " << r+1 << endl;
   }
   else cout << "no" << endl;       
}
int main()
{
    ios();
        solve();
}