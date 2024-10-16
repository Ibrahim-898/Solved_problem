//Template 
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
   
    
}
int main()
{
    ios();
    int  n,q;
    cin >> n  >> q;
    vector<int> pos(51,-1);
    for(int i=0;i<n;i++) {
        int y;
        cin >> y;
        if( pos[y] ==-1) pos[y]=i+1;
    }
    
    int x = 0;
     while(x<q){
        int m;
        cin >> m;
       cout << pos[m] << " ";
       int k=1;
       while(k<=51){
        if(pos[k]<pos[m]) pos[k]++;
        k++;
       }
       pos[m]=1;
       x++;
    }
 

    
}