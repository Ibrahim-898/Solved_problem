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
        ll n ,k;
        cin >> n >> k;
        if(n%2==0) cout << "YES" << endl;
        else if(n%2!=0 && k%2!=0) cout << "YES" << endl;
        else if(k==1 || k==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}