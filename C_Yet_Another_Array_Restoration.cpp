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
    ll n,x,y;
    cin >> n >> x >> y;
    if(n==2){
        cout << x << " " << y << endl;
        return;
    }
    int dif = y-x;
    vector<int> v;
    for(int i=1;i*i<=dif;i++){
        if(dif%i==0){
            int res=dif/i;
            if(res==i){
                v.push_back(i);
            }
            else{
                v.push_back(i);
                v.push_back(res);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto u:v){
        int cnt=0;
        if(dif/u+1<=n){
            int p=y,q=y+u;
            while(cnt<n && p>0){
                cout << p << " ";
                p-=u;
                cnt++;
            }
            while(cnt<n){
                cout << q << " ";
                q+=u;
                cnt++;

            }
            cout << endl;
            break;
        }
        //else continue;
    }
    v.clear();

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