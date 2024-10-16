//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string s,a;
    cin >> s >> a;
    sort(a.rbegin(),a.rend());
    int j =0;
    for(int i=0;i<s.size();i++){
        if(s[i]<'9'){
                for(int j=0;j<a.size();j++){
                    if(a[j]>s[i])
                    {
                        swap(s[i],a[j]);
                        a[j]=-1;
                        break;
                    }
                }
        }
        else continue;
    
        
    }
    cout << s << endl;

}