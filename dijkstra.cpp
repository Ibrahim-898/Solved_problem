#include<bits/stdc++.h>
using namespace std;
const int N=10;
const int  INF =1e9+19;
vector< pair<int,int> > adj[N];
void dijkstra(int source){
    vector<int> vis(N,0);
    vector<int> dist(N,INF);
    set<pair<int,int>> st; 
    st.insert({0,source});
    while(st.size()>0){
        auto node = *st.begin();
        int dist_v = node.first;
        int v = node.second;
        st.erase(st.begin());
        if(vis[v]==1) continue;
        vis[v] = 1;
        for(auto child : adj[v]){
            int child_v = child.first;
            int wt = child.second;
            if(dist[v]+wt < dist[child_v]){
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});
            }
        }
    }

    for (auto i : dist)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int size,u,v,wt,cnt=0;
    cin >> size;
    int a[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cin >>  a[i][j];
           if(a[i][j]>0) cnt++;
        }
    }
    
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i][j]>0){
            u = i+1;
            v = j+1;
            wt = a[i][j];
            adj[u].push_back({v,wt});
            }
         }
     }
     for(int i=0;i<N;i++){
     for (auto u : adj[i])
     {
        cout << u.first << " " << u.second << endl;
     }
     }
     dijkstra(0);


}
