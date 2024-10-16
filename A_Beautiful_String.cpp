#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--) 
    {
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(s[i-1]=='a' && s[i+1]=='a')
            }
        }
        for(int i=0;i<s.size()-1;i++){
             if(s[i]!='?' && s[i]==s[i+1]){
                cout << -1 << endl;
                break;
             }
        }
    }
}