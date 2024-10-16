//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define dl double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n,zero=0,one=0,ans=-1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
       if(arr[i]==0) {
        zero++;
         ans=max(zero,ans);
       }
       else{
        if(zero>0) zero--;
        one++;
       }
    }
    
    cout << ans +one << endl;
    
   
     
}