#include<bits/stdc++.h>
using namespace std;
const int N=1e3+123;
vector<int> graph[N];
vector<pair<int,int>> graph1[N];
int main()
{ 
    // adjacency list for undirected  unweighted graph
    int n,m;
    cin >> n >> m;
    /*for(int i=0;i<m;i++){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
        // graph[v1].push_back(v2) //for directed graph
    }
    for(int i=0;i<n;i++){
        for(auto u: graph[i]){
            cout << u << " ";
        }
        cout << endl;

    }*/
    // for weighted graph
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin >> v1 >> v2 >> wt;
        graph1[v1].push_back({v2,wt});
        graph1[v2].push_back({v1,wt});
        // graph[v1].push_back(v2) //for directed graph
    }
    for(int i=0;i<n;i++){
        for(auto u: graph1[i]){
            cout << "node:" << u.first << " " << "weight:" << u.second << endl;;
        }
        cout << endl;

    }

}