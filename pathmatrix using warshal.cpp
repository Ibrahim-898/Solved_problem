#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+10;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
             arr[i][j]=x;
        }
    }
    int i,j,k;
    for( k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                arr[i][j]= arr[i][j] | arr[i][k]&arr[k][j];
            }
        }
    }
    // for cycle
    int x,f=0;
    cin >> x;
    for(int j=0;j<n;j++){
            if(arr[x][j]==1 && arr[j][x]==1 ){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    }
