//Template 
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
    cin >>  t;
    while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int cnt=0,m=n;
    for(int i=0;i<n;i++){
       // int it=0;
        auto it=upper_bound(v.begin(),v.end(),v[i])-v.begin();
        if(it>(m-it)) cnt++;  
        else {
            i=it-1;
        }
        //cout <<"*" << cnt << endl;
        if(cnt==n) {
            break;
        }
    }
    cout << cnt << endl;
    }
}