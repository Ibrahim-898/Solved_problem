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
  string s,a,b;
  cin >> s;
  a.push_back(s[0]);
  int i=1;
  while(s[i]=='0'){
        a.push_back(s[i]);
        i++;
    }
    while(i<s.size()){
        b.push_back(s[i]);
        i++;
    }
    if(b.size()>a.size()) {
        cout << a << " " << b << endl;
        return;
    }
        if(a.size()==b.size()){
            if(b>a) 
            {
                cout << a << " " << b << endl;
            return;
            }
       }
    cout << -1 << endl;
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