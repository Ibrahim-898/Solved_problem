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
        
        int n;
        cin >> n;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            cin >> arr1[i];
        }
        int l=-1,h=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr1[i]) {
                l=i;
                break;
            }
        }
        if(l==-1) l=1;
        for(int i=n-1;i>l;i--){
            if(arr[i]!=arr1[i]) {
                h=i;
                break;
            }
        }
        if(h==-1) h=n-1;
        for(int i=l;i>0;i--){
            if(arr1[i]>=arr1[i-1]) l=i-1;
            else break; 
        }
        for(int i=h;i<n-1;i++){
            if(arr1[i+1]>=arr1[i]) h=i+1;
            else break;
        }
        cout << l+1 <<  " " << h+1 << endl;
       

    }
}