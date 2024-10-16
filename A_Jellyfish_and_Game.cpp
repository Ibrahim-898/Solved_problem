//Template
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    ll n,m,k,ans1=0,sum1=0,sum2,ans2;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)  cin >> a[i];  
    for(int i=0;i<m;i++)  cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll mn = min(a[0],b[0]);
    ll mx = max(a[n-1],b[m-1]);
    if(a[0]<b[m-1]) {
        swap(a[0],b[m-1]);
        for(auto u:a){
            sum1+=u;
        }
        for(auto u:b){
            ans1+=u;
        }
        sum2=sum1+mn-mx;
        ans2=ans1+mx-mn;
    }
    else
    {
         for(auto u:a){
            sum1+=u;
        }
         for(auto u:b){
            ans1+=u;
        }
        sum2=sum1+mn-mx;
        ans2=ans1+mx-mn;
    }
    if(k%2) cout << sum1 << endl;
       else cout << sum2 << endl;

        

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
