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
        if(n==1) cout << 1 << endl;
        else if(((n*(n+1))/2)%n==0 && n>1) cout << -1 << endl;
        else
        {
            int j=1;
             for(int i=2;i<=n;i+=2){
                cout << i << " " <<  j << " ";
                j+=2;
             }
             cout << endl;
        }
    }
}