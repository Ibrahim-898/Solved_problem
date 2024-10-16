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
        ll n,m,x;
        cin >> n >> m >> x;
        ll rem=x%n;
        ll div=x/n;
        if(rem>0){
            cout << (rem-1)*m+(div+1) << endl;
        }
        else cout << (n-1)*m+div<< endl;
    }
}