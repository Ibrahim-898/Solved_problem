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
    int t;
    cin >> t;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
       if(arr[i]==0) zero++;
       else{
        f=i;
        ans=max(zero,ans);
        zero=0;
       }
    }
    
    cout << ans << " " <<  f  << endl;

     
}