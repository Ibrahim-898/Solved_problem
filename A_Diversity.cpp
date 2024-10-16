//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string s;
    int n;
    cin >> s >> n;
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(s.size()<n) cout << "impossible" << endl;
    else
    {
        if(n>st.size())
        cout << n-st.size() << endl;
        else cout << 0 << endl;
    }

}