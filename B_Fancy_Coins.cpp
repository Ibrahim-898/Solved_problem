
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int m,k,a1,ak,ans=0;
    cin >> m >> k >> a1 >> ak;
    if(a1==0 && ak==0){
        ans +=m/k+m%k;
    }
    else
    {
      int x3=m/k;
      if(ak>=x3){
        ak-=x3;
        m-=k*x3;
        m-=a1;
        if(m>0){
            if(m%k==0) {
                ak-=(m/k);
                if(ak<0){
                    ans+=abs(ak);
                }  
            }
            else if(m%k==1){
                ak-=m/k+1;
                if(ak<0){
                    ans+=abs(ak);
                }
            }
            else 
            {
                if(a1>=m%k){
                    
                }
            }

      }
    }
    
   
    }
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();
    }

   
    
}

