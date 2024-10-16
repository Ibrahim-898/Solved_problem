#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0;
        cin >> n;
        string s;
        cin >> s;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            int j=i+2;
            while(j<n-1){
                if(s[j]==s[i] && s[j+1]==s[i+1]){
                    flag=1;
                    break;
                }
                j++;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}