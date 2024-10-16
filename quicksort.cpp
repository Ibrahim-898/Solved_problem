#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++) {
        if(arr[i]<=pivot) cnt++;
    }
    int pivotindx = s+cnt,i=s,j=e;
    swap(arr[s],arr[pivotindx]); 
    while(i < pivotindx && j>pivotindx) {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i < pivotindx && j>pivotindx) swap(arr[i++],arr[j--]);
    }
}
void qsort(int arr[],int s,int e){
    if(s>=e) return;
    int p = partition(arr,s,e);
    qsort(arr,s,p-1);
    qsort(arr,p+1,e);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    qsort(arr,0,n-1);
    for(auto u:arr){
        cout << u << " ";
    }
    cout << endl;

}