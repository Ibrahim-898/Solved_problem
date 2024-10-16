
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
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

void solve() {
    int n,x,val;
    cin >> n >> x;
    vector<int> v(n);
    ll sum =0;
    queue<int> q;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        val = q.front();
        sum+=val;
        q.pop();
        if(val%x==0){
            int m = x;
            while(m>0){
                q.push(val/x); 
                m--;
            }
        }
        else break;  
    }
    while(!q.empty()){
        sum+=q.front();
        q.pop();
    }
    cout << sum << endl;

}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}