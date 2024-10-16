//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
int main()
{
    ios();
    int t;
    cin >>  t;
    while(t--){
    int  n,k;
    cin >> n >> k;
    if(k>30) cout << n+1 << endl;
    else cout << min(n+1,(1 << k)) << endl;
   // else cout << n+1 << endl;

    }
}
