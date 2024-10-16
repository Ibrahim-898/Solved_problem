#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<string,int> &a,const pair<string,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
const int N=100;
void solve() {
    
    
}
int main()
{
    int  n;
    cin >> n;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++){
        string name;
        int val;
        cin >> name >> val;
        v.push_back({name,val});    
    }
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){
        cout << u.first << " " << u.second << endl;
    }
    cout << endl;
}