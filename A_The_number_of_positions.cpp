//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a, 
         const pair<int,int> &b){
    return (a.second<b.second);
}
int main()
{
    ios();
   int n,a,b;
   cin >> n >> a >> b;
   if(n-a<=b) cout << n-a << endl;
   else cout << b+1 << endl;
}