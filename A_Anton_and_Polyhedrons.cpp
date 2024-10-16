//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);

int main()
{
    ios();
    int n,cnt=0;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]=="Tetrahedron") cnt+=4;
        else  if(v[i]=="Cube") cnt+=6;
        else if(v[i]=="Icosahedron") cnt+=20;
        else if(v[i]=="Dodecahedron") cnt+=12;
        else cnt+=8;
    }
    cout << cnt << endl;
    
}