//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const ll n=1e3+123;
ll arr[n];
int m;
bool ispossible(ll value ){
    for(int i=0;i<m;i++){
        value+=arr[i];
        if(value<=0) return false;
    }
    return true;
}
int main()
{
    ios();
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> m;
        for(int j=0;j<m;j++){
            cin >> arr[j];
        }
        ll hi=1e11,lo=0,mid,ans=hi;
        while(hi-lo>=0){
            mid=(hi+lo)/2;
            if(ispossible(mid)==true){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout << ans << endl; 
    }
    return 0;
}