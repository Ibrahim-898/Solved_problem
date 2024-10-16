//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,
         const pair<int,int> &b){
    return(a.second<b.second);
}

 
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0,ans=0;
        string s;
        cin >> n >> s;
        vector<int> v(n),a(n);
        vector<pair<int,int>> vp(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            int x=s[i]-48;
            if(x==1) cnt++;
            vp[i]=make_pair(x,v[i]);
        }
        
        for(int i=0;i<n-1;i++){
            if(vp[i].second>vp[i+1].second && vp[i].first<vp[i+1].first){
                vp[i].first++;
                vp[i+1].first--;
            }
        }
        for(auto u:vp){
            cout << u.first << " " << u.second << endl;
        }
        cout << endl;
    }
}