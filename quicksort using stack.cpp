#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[e];
    int pivotindx = s;
    for(int i=s;i<e;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pivotindx]);
            pivotindx++;
        }
    }
    swap(arr[e],arr[pivotindx]);
    return pivotindx;
}
void quicksort(int arr[],int s,int e){
    stack<pair<int,int>> st;
    st.push({s,e});
    while(!st.empty()){
         s = st.top().first;
        e = st.top().second;
        st.pop();
        int p = partition(arr,s,e);
        if(p-1>s){
            st.push({s,p-1});
        }
        if(p+1<e){
            st.push({p+1,e});
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    for(auto u:arr){
        cout << u << " ";
    }
    cout << endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout<< endl;

}