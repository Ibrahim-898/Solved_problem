
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    string s;
    cin >> s;
    int ans =4,dif;
    if(s[0]=='0') ans+=9;
    else  ans += abs(s[0]-'1');
    for(int i=0;i<3;i++){
        dif = abs(s[i]-s[i+1]);
        if(s[i]=='0' &&  s[i+1]!='0' || s[i]!='0' && s[i+1]=='0') ans+=10-dif;
        else ans+=dif;
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

