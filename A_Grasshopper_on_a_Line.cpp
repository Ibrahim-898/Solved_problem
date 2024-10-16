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
    while(t--){
        int x,k;
        cin >> x >> k;
        if(x%k==0){
            cout << 2 << endl;
            cout << x-k+1 << " " << k-1 << endl;
        }
        else {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
}