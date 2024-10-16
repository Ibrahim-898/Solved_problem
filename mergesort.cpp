#include<bits/stdc++.h>
using namespace std;
// merge sort
void merge(int *arr,int start,int end){
    int mid =(start+end)/2;
    int len1 = mid-start+1,len2 = end-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int indx = start;
    for(int i=0;i<len1;i++){
        first[i]=arr[indx++];
    }
    int x=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[x++];
    }
    int i=0,j=0,k=start;
    while(i<len1 && j<len2){
        if(first[i] < second[j]){
            arr[k++] = first[i++];
        }
        else
        {
            arr[k++] = second[j++];
        }
    }
    while(i<len1){
        arr[k++] = first[i++];
    }
    while(j<len2){
        arr[k++] = second[j++];
    }
}
void mergesort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
}
int main()
{
    int n,start,end;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}