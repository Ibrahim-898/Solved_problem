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
        int x;
        string s;
        cin >> x >> s;
        int cnt=1,mx=1;
        for(int i=0;i<x-1;i++){
            if(s[i]==s[i+1]){
             cnt++; 
             mx=max(cnt,mx);
            }
            else cnt=1;
        }
        cout <<  mx+1 << endl;
        
    }
}