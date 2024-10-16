//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0); 
const int mod=1e9+7;
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
       int n,flag=-1;
       string s,x;
       cin >> n >> s;
       x=s;
       char ch;
       sort(s.begin(),s.end());
       if(s[0]==x[0]){
        for(int i=1;i<n;i++){
            if(x[i]==x[0]) {
                flag=i;
                ch=x[i];
            }
        } 
               if(flag>0) {
                x.erase(x.begin()+flag);
               cout  << ch << x << endl;
               }
               else cout << x << endl;
       }
       else
       {
        for(int i=1;i<n;i++){
            if(x[i]==s[0]) {
                flag=i;
            }
        }
        x.erase(x.begin()+flag);
        cout << s[0] << x << endl;
       }
       
    }
    


   
}
