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
    int n,m;
    cin >> n >> m;
    vector<int> v(m),v1(m);
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
         v[i]=x; v1[i]=x;
    }
    sort(v.rbegin(),v.rend());
    int maxcost=0,mincost=0,cnt=0;
    for(int i=0;i<n;i++){ 
            maxcost+=v[0]; 
               v[0]--;
            sort(v.rbegin(),v.rend());
           //out << i << " " << cnt << endl;
        }
    sort(v1.begin(),v1.end());
    int mn=v1[0],ans=0;
    for(int i=0;i<n;i++){
            mincost+=v1[0];
            if(v1[0]>0)v1[0]--;
            if(v1[0]==0) v1[0]=1e7;
            sort(v1.begin(),v1.end());
            
        }
    cout << maxcost <<  " " << mincost << endl;
}