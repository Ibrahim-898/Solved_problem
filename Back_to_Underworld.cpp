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
const  int N=2e4+12;
bool vis[N];
bool isnode[N];
int cnt,cnt1;
vector<int> adj[N];
void dfs(int n,int col) {
    vis[n]=1;
    if(col==1) cnt1++;
    cnt++;
    int temp;
    if(col==1) temp=2;
    else temp=1;
    for(auto u: adj[n]){
        if(vis[u]==0){
            dfs(u,temp);
        }
    }
}
int main()
{
     ios();
     int t;
     cin >> t;
for(int tc=1;tc<=t;tc++){
    for(int  i=1;i<=N;i++){
        adj[i].clear();
        isnode[i]=0;
        vis[i]=0;
    }
      int n,k=0,ans=0;
    cin >> n;;
    for(int i=1;i<=n;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        isnode[x]=1;
        isnode[y]=1;
    }
    cout << endl;
    for(int i=1;i<=2e4;i++){
        if(isnode[i]==1 && vis[i]==0){ 
             cnt=0;
             cnt1=0;
             dfs(i,1);
             ans+=max(cnt1,cnt-cnt1);
        }
    }
    cout << "Case " << tc << ": " << ans << '\n';
    }
return 0;
}