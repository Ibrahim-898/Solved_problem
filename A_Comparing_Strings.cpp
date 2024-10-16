//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string a,b,c,d;
    cin >> a >> b;
    if(a.size()!=b.size()) cout << "NO" << endl;
    else
    {
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            cnt++;
            if(cnt>2) break;
            c.push_back(a[i]);
            d.push_back(b[i]);
            
        }   
    }
    if(c[0]==d[1] && d[0]==c[1] && cnt==2) cout << "YES" << endl;
    else cout << "NO" << endl; 
    }
}