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
    int n,last=1e9+2,cnt;
     cin >> n;
     vector<int> v(n);
     map<int,int> mp;
     for(int i=0;i<n;i++) {
        cin >> v[i];
        mp[v[i]]++;
     }
     bool issorted=true;
     for(int i=0;i<n-1;i++){
        if(v[i+1]<v[i]){
            issorted=false;
        }
     }
     cnt=mp.size();
     if(mp.size()==1 || issorted) {
        cout << 0 << endl;
        return;
     }
     for(int i=n-1;i>=0;i--){
        if(mp[v[i]]<=1){
            if(v[i]<=last) {
                last=v[i];
                cnt-=1;
            }
            else {
                last=0;
                cout << cnt << endl;
                return;
            }
        }
        else{
            int x=mp[v[i]];
            int j=i-1,f=1;
            x--;
            if(v[i]>last){
                last =0;
                cout << cnt << endl;
                return;
            }
            while(x--){
                if(v[j]!=v[i]){
                    last=0;
                    f=0;
                    cout << cnt << endl;
                    return;
                }
                j--;
            }
            if(f) {
                cnt-=1;
                last=v[i];
                i-=(mp[v[i]]-1);
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