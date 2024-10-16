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
       vector<int> v;
       for(int i=0;i<n-1;i++){
        int x;
        cin >> x;
        v.push_back(x); 
        }
        cout << v[0] << " ";
        for(int i=0;i<n-2;i++){
            cout << min(v[i],v[i+1])<< " ";
        }
        cout << v[n-2] << endl;

    }

}