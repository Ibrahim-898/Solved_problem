//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n,ans=0,one=0;
    cin >> n;
    vector<int> v(n);
    int hash[5]={0};
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    ans+=hash[4]+hash[3];
    if(hash[1]>hash[3]) one=hash[1]-hash[3];
    int rem=(2*hash[2]+one)%4;
    int div=(2*hash[2]+one)/4;
    ans+=div;
    if(rem%4!=0) ans++;
    ans+=rem/4;
    cout << ans << endl;

}