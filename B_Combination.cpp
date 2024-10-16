//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a, 
         const pair<int,int> &b){
    return (a.second<b.second);
}
int main()
{
    ios();
    int n;
    cin >> n;
    vector<pair<int,int>> vp,v;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        vp.push_back(make_pair(x,y));
    }
   sort(vp.begin(),vp.end(),cmp);
   reverse(vp.begin(),vp.end());
   int moves=1,point=0,f=-1;
    for(int i=0;i<n;i++){
        if(vp[i].second>0){
            moves+=vp[i].second-1;
            point+=vp[i].first;
            f=i;
        }
        else  {
            v.push_back(make_pair(vp[i].first,vp[i].second));
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++){
        if(moves==0) break;
        point+=v[i].first;
        moves--;
        
    }
    cout << point << endl;
}