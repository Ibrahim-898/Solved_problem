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
int lev[N];
int cnt;
vector<int> adj[N];
void bfs(int n){
    memset(lev,-1, sizeof(lev));
    lev[n]=0;
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v : adj[u]){
            if(lev[v]==-1){
                lev[v]=lev[u]+1;
                q.push(v);
            }
        }
    }

}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
    int n ,m,k=0,ans=0;
    cin >> n >> m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
    cout << lev[n] << endl;
     }

}