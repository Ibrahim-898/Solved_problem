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
        if(a[i]!=a[i+1] || a[i]+1!=a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    string s;
    cin >> s;
    int len=0,zero=0,one=0,mx=0,ans=0;
    if(s[0]=='0') zero++;
    else one++;
    for(int i=1;i<s.size();i++){
            if(s[i]>s[i-1]){
                len++;
               if(s[i]=='0') zero++;
               else one++;
                }
                else {
                    if(mx<=len){
                        mx = len;
                        len = 0;
                    if(zero>=0 && one>0){
                        ans+=2;
                    }
                    else {
                        ans++;
                    }
                    zero=1;
                    one =0;
                    }
                    else{

                    }
                }
                
            }
        
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