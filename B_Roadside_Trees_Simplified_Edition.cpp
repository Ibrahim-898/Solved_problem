//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n;
    cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin >> v[i];
   }
   int cnt=n+v[0];
  
   for(int i=1;i<n;i++){
    if(v[i]>=v[i-1]){
        cnt+=1;
        cnt+=v[i]-v[i-1];
    }
    else 
    {
        cnt+=v[i-1]-v[i]+1;
    }
    
   }
   cout << cnt << endl;
}