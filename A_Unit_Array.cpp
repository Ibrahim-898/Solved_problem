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
    cin >>  t;
    while(t--){
    int n,neg=0,pos=0,ans=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i]<0) neg++;
    else pos++;
    }
        if(neg>pos) {
            while(pos<neg){
            neg--;
            pos++;
            ans++;
            }
    }
    if(neg%2!=0) ans++;
    cout << ans << endl;
}
}