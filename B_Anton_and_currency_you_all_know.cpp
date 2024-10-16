//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    string a;
    cin >> a;
    int n=a.size(),cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && a[i]<a[n-1]){
            swap(a[i],a[n-1]);
            break;
        }
        else cnt++;
    }
    if(cnt==n) {
        for(int i=n-2;i>=0;i--){
            if(a[i]%2==0) {
                swap(a[i],a[n-1]);
                break;
            }
        
        else ans++;
        }
    }
    if(ans==n-1) cout << -1 << endl;
    else cout << a << endl;

}