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
       int n,even=0,minodd=1e9+2,mineven=1e9+2;
       cin >> n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]%2==0) {
            mineven=min(mineven,v[i]);
            even++;
        }
        else minodd=min(minodd,v[i]);
       }
       if(even==n) cout << "YES"  << endl;
       else
       {
        if(mineven>minodd) cout << "YES" << endl;
        else cout << "NO" << endl;
       }
    }
}