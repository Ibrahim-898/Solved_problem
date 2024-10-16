//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n,k,cnt=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int x=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=x && arr[i]!=0){
            cnt++;
        }
    }
     cout << cnt << endl;
}