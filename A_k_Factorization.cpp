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
    int n,k;
    cin >> n >> k;
    vector<int> v;
    int cnt=0;
    int sz=sqrt(n);
    for(int i=1;i<=sz;i++){
        if(n%i==0) {
            v.push_back(i);
            if(i==n/i) cnt++;
            else cnt+=2;
        }
    }
    if(k>cnt) cout << -1 << endl;
    else
    {
        for(int i=0;i<k;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}