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
   int n;
   cin >> n;
   string s,ss;
   cin >> s;
   for(int i=0;i<s.size();i++){
    if(s[i]=='a'|| s[i]=='e'){
        if(s[i+2]=='a' || s[i+2]=='e'){
            ss.push_back(s[i-1]);
            ss.push_back(s[i]);
            ss.push_back('.');
        }
        else  {
           ss.push_back(s[i-1]);
            ss.push_back(s[i]);
            ss.push_back(s[i+1]);
            ss.push_back('.');
            i++;
        }
    }
   }
   ss.pop_back();
   if(ss.back()=='\0') ss.pop_back();
   cout <<ss <<  endl;
   ss.clear();
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