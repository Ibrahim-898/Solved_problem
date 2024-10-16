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
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mn=arr[0],mx=arr[0],cnt=0;
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            cnt++;
        }
        else if(arr[i]<mn){
            mn=arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}