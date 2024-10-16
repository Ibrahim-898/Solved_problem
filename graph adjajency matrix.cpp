#include<bits/stdc++.h>
using namespace std;
const int N=1e3+123;
char graph [N][N];
int main()
{ 
    // adjacency matrix
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf(" %c",&graph[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << graph[i][j];
        }
        cout << endl;
    }
    cout << endl;
    

}