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
        int n,k,ans=0,f=0;
        cin >> n >> k;
        for(int i=1;i<=n;i+=k){
            ans++;
            if(i==n) f=1;
            }

        
        if(f==0) ans++;
        cout <<ans << endl;
}
}