#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--){
    stack<char> st;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int one=0,f=1;
        while(!st.empty()){
            if(st.top()=='1') one++;
            if(st.top()=='0') one--;
            st.pop();
            if(one<0){
                break;
            }
        }
         if(one==0)cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
    }
}
