//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n,f=0,cnt=1;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]) {
            f=i;
        }
        else
        break;
    }
    for(int i=f+1;i<n-1;i++){
        if(v[i+1]>=v[i]){
            cnt++;
        }
        else {
            cnt=-1;
             break;
        }
    }
   if(f==n-2){
    if(v[n-1]<=v[0]) cout << 1 << endl;
    else cout << -1 << endl;
   }
   else if(f==n-1) cout << 0 << endl;
   else if(v[n-1]>v[0]) cout << -1 << endl;
   else cout << cnt  << endl;
    
    
}