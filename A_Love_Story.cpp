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
    string a,b;
    b="codeforces";
    cin >> a;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) cnt++;
    }
    cout << cnt <<  endl;
    
    }
    
}