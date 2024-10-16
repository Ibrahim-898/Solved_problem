#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        sort(s.begin(),s.end());
        int sz = s.size();
        for(int i=0;i<sz;i++){
            if(s[i]==' ') continue;
            else cout << s[i];
        }
        cout << endl;
    }

   // return 0;
}
