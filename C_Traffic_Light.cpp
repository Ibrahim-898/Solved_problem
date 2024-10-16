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
        char c;
        string s;
        cin >> n >> c >> s;
        s+=s;
        int ans=0;
        for(int i=0;i<2*n;i++){
            int cnt=0;
            if(s[i]==c && c!='g'){
                int j=i+1;
                while(j<2*n && n>1){
                    if(s[j]=='g') {
                        cnt++;
                        ans=max(ans,cnt);
                        break;
                    }
                    else cnt++;
                    j++;
                    i=j;
                }
            }
        }
        cout << ans  << endl;

       

        
    }
}