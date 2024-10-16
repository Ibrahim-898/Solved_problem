#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<c.size();i++){
        if(c[i]-48>=0 && c[i]-48<10){
            cout << c[i];
        }
        else if(isupper(c[i])){
            char x=tolower(c[i]);
            for(int j=0;j<26;j++){
                if(x==a[j]){
               char ch=b[j]-32;
               cout << ch ;
                }
               
            }
        }
        else
        {
            for(int j=0;j<26;j++){
                if(c[i]==a[j])
                cout << b[j];
            }
        }
    }
    

}