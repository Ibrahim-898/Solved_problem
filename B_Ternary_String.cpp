#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >>  s;
        vector<string> v;
        int sz = s.size();
            for(int j=3;j<sz;j++){
                 for(int i=0;i<sz;i++){
            v.push_back(s.substr(i,j));
            }
            cout << endl;
        }
        for(auto u : v){
            for(int i=0;i<u.size();i++){
                if(u[i]!=u)
            }
        }
        
        
    }
}