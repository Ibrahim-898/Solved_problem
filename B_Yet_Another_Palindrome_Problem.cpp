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
        int n,flag=0;
        cin >> n;
        int arr[n+2];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(arr[i]==arr[j]){
                    flag=1;
                    break;
                }
            }
                if(flag==1) break;
                
            
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
