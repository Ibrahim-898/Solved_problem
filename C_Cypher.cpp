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
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            int x;
             string s;
            cin >> x >> s;
            for(int j=0;j<x;j++){
                if(s[j]=='D'){
                    arr[i]++;
                    if(arr[i]==10) arr[i]=0;
                }
                else
                {
                    arr[i]--;
                    if(arr[i]==-1) arr[i]=9;
                }
            }
           
        }
        for(auto u:arr){
            cout << u << " ";
        }
        cout << endl;
    }
}