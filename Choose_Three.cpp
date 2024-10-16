#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n,s,f=0;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    
    for(int i=0;i<n;i++){
        int l=i+1,r=n-1;
    while(l<r){
        long long int sum=a[i]+a[l]+a[r];
        if(sum==s){
            cout << "YES" << endl;
            f=1;
            break;
        }
        else if(sum<s){
            l++;
        }
        else {
            r--;
        }
    }
    if(f) break;
    }
    if(f==0) cout << "NO" << endl;

    }


    return 0;
}
