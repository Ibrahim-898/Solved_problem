#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]) {
                swap(arr[i],arr[j]);
            }

        }
    }
}
void merge2darray(){
    int n,m;
    cin >> n>>m;
    int a[n][n],b[n][m],arr[n][n+m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
            arr[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>b[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=n;j<n+m;j++){
            arr[i][j]=b[i][k++];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n+m;j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n][n],arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int p=i;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(a[p][j]<a[p][k]) swap(a[p][j],a[p][k]);
            } 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    
}