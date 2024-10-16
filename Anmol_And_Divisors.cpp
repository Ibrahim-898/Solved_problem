#include<bits/stdc++.h>
using namespace std;
const int lim = 1e7+123;
vector<int> mx[lim];
int main()
{
    for(int i=2;i*i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            mx[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
   int n;
   cin >> n;
    
            for(auto u:mx[n]){
                cout << u << " ";
            }
            cout << endl;
    }
    }



