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
   int n,cnt=0,m,digit=0,hand=0;
   cin >> n;
   string s,ans;
   cin >> s;
   if(s[0]!='9'){
    for(int i=0;i<n;i++){
        int x= s[i]-'0';  
        cout <<9-x;
    }
    cout << endl;
   }
   else{
    if(s[n-1]=='0' || s[n-1]=='1'){
        ans.push_back((1-(s[n-1]-'0'))+'0');
        hand=0;
    }
    else {
        char ch=(11-(s[n-1]-'0'))+'0';
        ans.push_back(ch);
        hand=1;
    }
    for(int i=n-2;i>=0;i--){
        int x=s[i]-'0';
        if(s[i]=='0'){
            if(hand==1){
                ans.push_back('0');
            }
            else ans.push_back('1');
            hand=0;
        }
        else if(s[i]=='1' && hand==0){
            ans.push_back('0');
            hand=0;
        }
        else{
            if(hand==0){
                char ch=(11-x)+'0';
                ans.push_back(ch);
                hand=1;
            }
            else{
                char ch =(11-(x+1))+'0';
                ans.push_back(ch);
                hand=1;
            }

        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;

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