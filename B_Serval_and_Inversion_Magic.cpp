//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}

int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s,s1;
        cin >>  n >> s;
        int i,j,l=-1,r;
        for( i=0;i<n/2;i++){
             if(s[i]!=s[n-i-1]) {
                if(l==-1)
                 l=i;
                r=i;
             }
        
        }
        if(l!=-1){
        for(i=l;i<=r;i++){
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
        }
        }
        int cnt=0,flag=0;
        for( i=0;i<n/2;i++){
             if(s[i]!=s[n-i-1]) {
                flag=1;
                break; 
             }
        
        }
        //cout << flag << endl;
        if(flag==1) cout << "No" <<  endl;
        else cout << "Yes" << endl;
}
}