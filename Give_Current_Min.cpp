#include<bits/stdc++.h>
using namespace std;
vector<int> minHeap(int n){
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    
    int j=v.size()-1;
    while(j!=0 && v[(j-1)/2]>v[j]){
        swap( v[(j-1)/2],v[j]);
        j=(j-1)/2;
    }
    }
    return v;
   
}
void insertAtHeap(vector<int> &v,int val){
    v.push_back(val);
    int j = v.size()-1;
    while(j!=0 && v[(j-1)/2]>v[j]){
        swap( v[(j-1)/2],v[j]);
        j=(j-1)/2;
    }
    }
void DeleteHeapElement(vector<int> &v){
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    int size = v.size()-1,cur=0;
    while(1){
   int l = cur*2+1,r=cur*2+2; 
   if(l<=size && r<=size){
   if(v[l]<=v[r] && v[cur]>v[l] ){
    swap(v[l],v[cur]);
    cur = l;
   }
   else if(v[r]<= v[l] && v[cur]>v[r]){
    swap(v[r],v[cur]);
    cur = r;
   }
   else break;
   }
   else if(l<=size && v[l]<v[cur]){
    swap(v[l],v[cur]);
    cur = l;
   }
   else if(r<=size && v[r]<v[cur]){
    swap(v[r],v[cur]);
    cur = r;
   }
   else break;
    }
}
int main()
{
    int n;
    cin >> n;
   vector<int> v =  minHeap(n);
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x==0){
            int val;
            cin >> val;
            insertAtHeap(v,val);
            cout << v[0] << endl;
        }
        if(x==1){
            for(auto u:v){
                cout << u << " ";
            }
            cout << endl;
        }
        if(x==2){
            DeleteHeapElement(v);
            for(auto u:v){
                cout << u << " ";
            }
            cout << endl;
            
            
        }
    }
}