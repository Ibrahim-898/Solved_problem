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
    int n,m;
    cin >> n >> m;
    vector<int> v(n),a(m);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        int  it = upper_bound(v.begin(),v.end(),a[i])-v.begin();
        if(it!=a[i]) it;
    
    cout <<  it << " ";
    }
    cout << endl;

   
       
}