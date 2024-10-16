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
    while(t--)
    {
       ll n;
       cin >> n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin >> arr[i];
       }
       sort(arr,arr+n);
       for(int i=0;i<n;i++){
        cout << i << " ";
       }
       cout << endl;
    }
}