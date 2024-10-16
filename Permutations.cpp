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
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans=max(ans,(arr[i-1]-arr[i]));
            arr[i]=arr[i-1]+1;
            
        }
    }
    cout << ans << endl;
}