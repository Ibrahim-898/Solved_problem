//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int  mx=1e7+2;
int arr[mx];
int main()
{
    ios();
    int m=1e7;
     int n;
     cin >> n;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m;j+=i){
            arr[j]++;
        }
    }
    ll ans=0;
        for(int i=1;i<=n;i++ ){
        ans+=(1LL*i*arr[i]);
        }
        cout << ans << endl;

}