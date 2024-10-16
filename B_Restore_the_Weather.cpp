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
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>>a;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(make_pair(x,i));
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end());
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[a[i].second]=b[i];
        }
        for(auto u:v){
            cout << u  << " ";
        }
        cout << endl;
        

    }
}