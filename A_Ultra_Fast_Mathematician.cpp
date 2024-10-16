//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string a,b,s;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]) cout << 0;
        else cout << 1;
    }
    cout << endl;
    

    
}