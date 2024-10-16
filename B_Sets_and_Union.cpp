#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=52;
void solve(){
    int n,cnt=0,ans=0,sum;
    cin >> n;
    vector<int> v[n];
    map<int,int> mp;
    set<int> s,s1;
    int j=0;
    for(auto u:mp){
    cout << u.first << " " << u.second << endl;
}
    while(j<n){
        int k;
        cin >> k;
        s1.clear();
     for(int i=0;i<k;i++)  
    {
        int x;
        cin >> x;
        s.insert(x);
        s1.insert(x);
    }
    for(auto u :s1){
        v[j].push_back(u);
        mp[u]++;
    }
    j++;
    }
cout << endl;
    for(int i=0;i<n;i++){
        cnt=0;
        for(auto u : v[i]){
            for(auto v:mp){
            if(v.first==u && v.second-1==0) {
                 cnt++;
            }
        }
        }
        //cout << "*"  << cnt << endl;
        int sub=s.size()-cnt;
        if(sub<s.size()) ans=max(ans,sub);
    
    }
    cout << ans << endl;
    
}
int main()
{
     ios();
     int t;
     cin >> t;
     while(t--){
     solve();
     }
}