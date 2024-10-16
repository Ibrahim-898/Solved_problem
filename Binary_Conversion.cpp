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
     int n,k,one=0,zero=0,cnt1=0,cnt2=0;
        cin >> n >> k;
        string s,t;
        cin >> s >> t;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && t[i]=='1') cnt1++;
            else if(s[i]=='1' && t[i]=='0') cnt2++;
            else if(s[i]=='0' && t[i]=='0') zero++;
            else if(s[i]=='1' && t[i]=='1') one++;
        }
        if(cnt1!=cnt2 || (cnt1==cnt2 && k<cnt1)) {
            cout << "NO" << endl;
            return;
        }

        if(cnt1==cnt2 &&  k%2==1) cout << "YES" << endl;
        else if(cnt1==cnt2 && k%2==0) cout << "NO" << endl;
       else if(cnt1==cnt2 && k>cnt1 && (zero==1 && one==1)){
            if((k-cnt1)%2==0) cout <<"YES" << endl;
            else cout << "NO" << endl;
        }
        else  if(cnt1==cnt2 && k>cnt1 &&( zero>=2 || one>=2)){
            cout << "YES" << endl;
         }
         //else cout << "NO" << endl;

    
}
int main()
{
    ios();
    int  t,i=1;
    cin >> t;
    while(t--){
        cout <<  "i " << i << endl;
        i++;
        solve();

    }
}