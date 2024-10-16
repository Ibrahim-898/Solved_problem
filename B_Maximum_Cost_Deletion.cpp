
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=52;
void solve(){
    int n,a,b,sum=0,cnt=1;
    cin >> n >> a >> b;
    vector<int> cons;
    string s;
    cin >> s;
    //cout << a << endl;
    if(b>=0) {
        cout << ((a*n)+(b*n)) << endl;
    }
    else
    {
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) cnt++;
            else {
                cons.push_back(cnt);
                cnt=1;
            }
        }
        cons.push_back(cnt);
        int sz=cons.size(),even=0,odd=0,ans=0;
        for(int i=0;i<sz;i++){
            if(i%2==0) even+=cons[i];
            else odd+=cons[i];
        }
        if(odd>even){
            for(int i=0;i<sz;i+=2){
            ans+=(a*cons[i])+b;
            }
            cout << ans+(odd*a+b) <<  endl;
        }
        else {
            for(int i=1;i<sz;i+=2){
            ans+=a*cons[i]+b;
            }
            cout << ans+(even*a+b) <<  endl;
        }
        
    }

}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
     solve();
     }
}