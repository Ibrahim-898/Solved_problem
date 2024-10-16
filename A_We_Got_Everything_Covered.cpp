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
    int n,k;
    cin >> n >> k;
    string s;
    int cha=97;
    for(int i=0;i<k;i++){
        char ch =cha;
        s.push_back(ch);
        cha++;
    }
    if(n==1) {
        cout << s << endl;
    return;
    }
    cout << s;
     reverse(s.begin(),s.end());
     cout << s << endl;

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