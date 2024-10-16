//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int n=1e6+123;
int arr[n];
int x;
int main()
{
    ios();
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            arr[j]++;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x;
        cout << arr[x] << endl;
    }
}