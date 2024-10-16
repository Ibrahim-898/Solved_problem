//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n,k,cnt=0;
    cin >> n >> k;
    int x=240-k;
    //cout << x << endl ;
    for(int i=1;i<=n;i++){
        x-=5*i;
        cnt++;
        if(x<0) {
            cnt--; 
        break;
        }
    }
    cout << cnt << endl;
}