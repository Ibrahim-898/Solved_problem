#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cur,j;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++){
        cur = a[i];
        j=i-1; 
        while(a[j]>cur && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    for(auto u:a){
        cout << u << " ";
    }
    cout << endl;
}
