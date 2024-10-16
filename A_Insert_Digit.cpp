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
        int n,d,f=0;
        string s,s1;
        cin >> n >> d >> s;
         s1=to_string(d);
        if(d==0) cout << s << 0 << endl;
        else
        {
        for(int i=0;i<n;i++){
            int x=int(s[i])-48;
            if(x<d){
                //s1.push_back(ch);
                s.insert(i,s1);
                break;
            }
        }
        if(s.size()==n) s.insert(n,s1);
        cout << s << endl;
    }
}
}