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
    cin >> t;
    while(t--)
    {
        int n,x=-1;
        cin >> n;
        if(n%2==0) cout << n/2 << " " << n/2 << endl;
        else
        {
         for(int i=2;i*i<=n;i++){
        if(n%i==0){
            x=i;
            break;
        }
    }
    if(x==-1) cout << 1 << " " << n-1 << endl;
    else{
        int m=n/x;
       cout << n-m << " " << m << endl;
    }
    }
    }
}