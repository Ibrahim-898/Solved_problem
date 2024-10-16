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
        ll n,sum=0;
        cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=abs(v[i]);
        }
        int chk=0,cng=1,l=0,r=1;
        for(int i=1;i<n;i++){
            if(v[i]<=0 && v[i-1]<=0) r++;
            else 
            {
                if(v[i-1]>0){
                    l=i;
                    r=i+1;
                    cng++;
                }
                else{
                    l=i+1;
                    r=i+1;
                    cng++;
                    i++;
                } 
                
            }
        }
        cout << sum << " " <<  cng << endl;
        
    }

    }
