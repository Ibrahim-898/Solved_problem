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
const  int N=1e5;
bool vis[N];
int cnt;
vector<int> adj[N];
void dfs(int n) {
    vis[n]=1;
    cnt++;
    for(auto u: adj[n]){
        if(vis[u]==0){
            dfs(u);
        }
    }

}
int main()
{
     ios();
    int n ,m,k=0,ans=0;
    cin >> n >> m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){ 
             cnt=0;
             dfs(i);
             ans+=(cnt-1);
        }
    }
    if(ans==0) cout << 1 << endl;
    else {
        ll result=pow(2,ans);
        cout << result << endl;
    }

}