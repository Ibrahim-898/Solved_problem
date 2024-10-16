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
        cin >> n;
        vector<int> a(n),b(n),v;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        } 
        int  a1[2*n+1]={0};
        int a2[2*n+1]={0};
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n && a[j]==a[i]) {
                j++;
                a1[a[i]]=max(a1[a[i]],j-i);
            }
                i=j-1;
            
        }
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n && b[j]==b[i]) {
                j++;
                a2[b[i]]=max(a2[b[i]],j-i);
            }
                i=j-1;
            
        }
        int mx1=0;
        for(int i=1;i<=2*n;i++){
            mx1=max(mx1,(a1[i]+a2[i]));
        }
        cout << mx1 << endl;
    }
}