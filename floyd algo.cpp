#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
const int INF = 1e9+10;
int arr[N][N];
int main()
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) arr[i][j]=0;
           else arr[i][j]=INF;
        }
    }
    int n,m; // n-number of vertices and m= number of edges
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y,wt;
        cin>> x >> y >> wt;
        arr[x][y]= wt;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j]= min(arr[i][k]+arr[k][j],arr[i][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]==INF) cout << "I" << " ";
               else  cout << arr[i][j] << " ";
            }
        }
    
}