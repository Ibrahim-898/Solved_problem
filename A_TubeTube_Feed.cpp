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
        int n,t,f=-1,tm,x=-1;
        cin >> n >> t;
        t++;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >>  a[i];
        }
        for(int i=0;i<n;i++){
            cin >>  b[i];
        }
        vector<int> v,v1;
        for(int i=0;i<n;i++){
            t--;
            if(a[i]<=t) {
                if(b[i]>=x){
                    x=b[i];
                    f=i;
                }  
                //else continue; 
            }
            //cout << i << " " << t << endl;             
        }
        if(f>=0) cout << f+1 << endl;
        else cout << f << endl;
    }
}