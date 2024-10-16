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
    string a,b;
    cin >> a >> b;
    int sz1=a.size(),sz2=b.size();
    ll sum=0,f=-1;
    if(sz1==sz2){
        for(int i=0;i<sz1;i++){
            if(a[i]!=b[i]){
                sum+=abs(a[i]-b[i]);
                f=i+1;
                break;
            }
        }
        if(f>0)
        sum+=9*(sz1-f);
        cout << sum << endl;
    }
    else
    {
        int x=b[0]-'0';
        sum+=((sz2-1)*9)+x;
        cout<< sum  << endl;
        }

    }
}
