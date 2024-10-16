#include<bits/stdc++.h>
using namespace std;
const int N=1e3+123;
int graph [N][N];
int main()
{ 
    // adjacency matrix
    int n,m,wt;
    cin >>  n >> m;
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin >> v1>> v2 >> wt;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << graph[i][j];
        }
        cout << endl;
    }
    cout << endl;
    

}