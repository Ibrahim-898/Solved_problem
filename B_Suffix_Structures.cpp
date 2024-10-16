//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
vector<int> v(26);
int main()
{
    ios();
    string s,t,a,b;
    cin >> s >> t;
    int j=0,cnt=0;
    a=s,b=t;
    sort(a.begin(),a.end());
     sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]==b[j]) {
            j++;
            cnt++;
        }
    }
    if(cnt!=t.size()) cout << "need tree" << endl;
    else if(s.size()==t.size()) cout << "array" << endl;
    else
    {
        int j=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]){
                j++;
                ans++;
            }
        }
        if(ans==t.size()) cout << "automaton" << endl;
        else cout << "both" << endl;
    }
}