//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mx=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) {
            cnt++;
            mx=max(mx,cnt);
        }
        else cnt=0;
    }
    cout << mx << endl;
    }
    
}