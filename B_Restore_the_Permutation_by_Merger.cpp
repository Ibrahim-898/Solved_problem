#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin >> arr[i];
        }
        vector<int> v;
        for(int i=2*n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(arr[i]==arr[j]) v.push_back(arr[i]);
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}