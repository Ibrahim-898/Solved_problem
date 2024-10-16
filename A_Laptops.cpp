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
        vector<int> a,b;
        for(int i=0;i<2*n;i++){
            int x,y;
            cin >> x ;
            a.push_back(x);
            cin >> y;
            b.push_back(y);
        }
        for(auto u:a){
            cout << u << " ";
        }
         cout << endl;
    }
}