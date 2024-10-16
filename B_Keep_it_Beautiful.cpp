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
        int q;
        cin >> q;
        vector<int> v(q),v1(q);
        for(int i=0;i<q;i++){
            cin >> v[i];
        }
        string s;
        s+='1';
        int j=1;
        int inc=1,x=v[0],lo=0,flg=1;
        for(int j = 1; j < q; j++){
            if(v[j] >= v[j-1] && inc) {
                s+='1';
                x=v[j];
                continue;
            }
                if(v[j]< v[j-1] && inc){
                   inc=0;
                }
                 if(flg && v[j]>=x ){
                            s+='1';
                            x=v[j];
                            continue;
                        }
                 if(flg && v[j]<=v[0]){
                            x=v[j];
                            flg=0;
                           
                        }
                 if(v[j]<=v[0] && v[j]>=x){
                            s+='1';
                            x=v[j];
                        }
               
                 else s+='0';
                
                    }
        cout << s << endl;
    }
       
    
}