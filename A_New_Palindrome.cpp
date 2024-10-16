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
        int x=26,cnt=0;
        vector<int> v(x);
        for(int i=0;i<x;i++) v[i]=0;
        string s;
        cin >> s;
        int n=s.size(),f=-1;
        for(int i=1;i<n/2;i++){
            if(s[i]!=s[i-1]) {
                f=1;
                break;
            }    
         }
         if(f==1) cout << "YES" << endl;
         else cout << "NO" << endl;
}
}