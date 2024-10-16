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
        string s,a;
        cin >> n >> s ;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) {
                a.push_back(s[j]);
                i=j;
                break;
            }
            }
        }
        cout << a << endl;
    }
    
}