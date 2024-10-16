#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    string s,ss[n-1],s1;
    cin >> s;
    map<string,int> mp;
    for(int i=0;i<n-1;i++){
            ss[i]=s.substr(i,2);
           mp[ss[i]]++;
            
    }
    int mx=0;
    for(auto u:mp){
        if(mx<u.second){
            mx=u.second;
            s1=u.first;
        }
    }
    cout << s1 <<  endl;
    
}