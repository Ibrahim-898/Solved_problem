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
    int a,b,l;
    cin >> a >> b >>l; 
    set<int> st;
    for( int i=0;i<=30;i++){
        for(int j=0;j<=30;j++){
            int mul = pow(a,i) * pow(b,j);
            if(mul>l) break;
            if(l%mul==0) st.insert(l/mul);
        }
    }    
    cout << st.size() << endl;
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