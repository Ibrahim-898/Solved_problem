//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}
int main()
{
    ios();
    int n;
    cin >> n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        p.push_back(make_pair(a,b));
    }
    int mx=p[0].second,mn=p[0].first,f=-2;
    for(auto u:p){
        if (mx<u.second) mx=u.second;
        if(mn>u.first) mn=u.first;
    }
    for(int i=0;i<n;i++){
        if(p[i].first==mn && p[i].second==mx) {
            f=i;
            break;
        }
    }
    cout << f+1 << endl;
    
    
    
}