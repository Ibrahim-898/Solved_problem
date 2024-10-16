#include<bits/stdc++.h>
using namespace std;
vector<int> maxHeap(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    
    int j=v.size()-1;
   // cout << v[j] << " " <<  v[(j-1)/2] << endl;
    while(j!=0 && v[(j-1)/2]<v[j]){
        swap( v[(j-1)/2],v[j]);
        j=(j-1)/2;
    }
    }
return v;
}
vector<int> minHeap(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    
    int j=v.size()-1;
   // cout << v[j] << " " <<  v[(j-1)/2] << endl;
    while(j!=0 && v[(j-1)/2]>v[j]){
        swap( v[(j-1)/2],v[j]);
        j=(j-1)/2;
    }
    }
    return v;
   
}
void DeleteHeapElement(vector<int> &v){
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    int size = v.size()-1,cur=0;
    while(1){
   int l = cur*2+1,r=cur*2+2; 
   if(l<=size && r<=size){
   if(v[l]>=v[r] && v[cur]<v[l] ){
    swap(v[l],v[cur]);
    cur = l;
   }
   else if(v[r]>= v[l] && v[cur]<v[r]){
    swap(v[r],v[cur]);
    cur = r;
   }
   else break;
   }
   else if(l<=size && v[l]>v[cur]){
    swap(v[l],v[cur]);
    cur = l;
   }
   else if(r<=size && v[r]>v[cur]){
    swap(v[r],v[cur]);
    cur = r;
   }
   else break;
  
    }
}
int main()
{
  
    
   vector<int> v =  maxHeap();
   for(auto u:v){
         cout <<  u << " ";

     }
     cout << endl;

    DeleteHeapElement(v);
    for(auto u:v){
        cout <<  u << " ";

    }
    cout << endl;
}