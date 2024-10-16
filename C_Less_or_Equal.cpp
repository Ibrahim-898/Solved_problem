#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int it=upper_bound(v.begin(),v.end(),v[k-1])-v.begin();
   if(it==k) cout << v[k-1] << endl;
   else if(k==0 && v[0]>1) cout <<v[0]-1 << endl;
   else cout << -1 << endl;
    
}