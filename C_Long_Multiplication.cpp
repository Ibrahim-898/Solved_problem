#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    string x,y;
    cin >> x ;
    cin >>  y;
    int xx=-100;
    while(xx>=0){
        cout << x << " ";
        x+=1;
    }
    //cout << x << " " <<  y << endl;
    int indx=0;
    for(int i=0;i<x.size();i++){
        if(x[i]==y[i]){
            indx++;
            continue;
        }
        else {
            if(x[i]<y[i]) swap(x[i],y[i]);
            indx++;
            break;
        }
    }
   for(int i=indx;i<x.size();i++){
    if(x[i]>y[i]) swap(x[i],y[i]);
   }
   cout << x << endl;
   cout << y << endl;
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}