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
    cin >>  t;
    while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin >> v[i];
    int i=0,j=n-1;
    int sum1=0,sum2=0,ans=0,mx=0;
    while(i<=j){
       if(sum1>=sum2){
            sum2+=v[j];
            ans++;
            j--;
           }
        else {
            sum1+=v[i];
            ans++;
             i++;  
        }
        if(sum1==sum2) {
            mx=max(ans,mx);
        }
    }
     cout << mx << endl;
    

    }
}