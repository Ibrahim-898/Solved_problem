//Template 
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
        int n;
        string s,s1="meow",x;
        cin >> n >> s;
        int i=0,j=0,cnt=0;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        while(i!=s.size()) 
        {
            if(s[i]==s1[j]){
                x.push_back(s[i]);
                i++;
                j++;
            }
            else i++;
            if(x.size()==4) break;
        }
        int sz=unique(s.begin(),s.end())-s.begin();
        if(sz==4 && x.size()==4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}