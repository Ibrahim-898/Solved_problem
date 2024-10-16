//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0); 
const int mod=1e9+7;
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
         ll n;
        cin >> n;
        ll sum=0;
         sum=((((n*(n+1))%mod)*((4*n-1)%mod))%mod);
        cout << (sum*2022/6)%mod << endl;
        //cout<< sum << endl;
    }  
}
