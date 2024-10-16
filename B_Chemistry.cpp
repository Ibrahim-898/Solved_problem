
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,k,x,cnt2=0,cnt1=0;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    x = (n-k)%2;
    for(auto u:mp){
        if(u.second>=2) {
            cnt2+=u.second/2;
            cnt1+=u.second%2;
        }
        else cnt1++;
    }
    if(x){
        if(cnt1>k+1){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
        else 
        {
            if(cnt1>k) cout << "NO" << endl;
            else cout << "YES" << endl;
        }

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

