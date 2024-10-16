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
    int n,ans=1,hp=1;
    cin >> n;
     int m=n;
         int val=0,np=0,y;
    for(int i=1;i<=n/2;i++){
         ans=(((3*i*i)+i)/2);
         hp=i;
        if(ans>n) {
            hp--;
            break;
        }   
       
    }
    int x= hp;
    ans=((3*x*x)+x)/2;
   int div= m/ans;
   m-=ans*div;
    np+=div;
    for(int i=x-1;i>0;i--){
        val=((3*i*i)+i)/2;
        div=m/val;
        np+=div;
        m-=div*val;
        if(m<1) break;

    }
      cout << np << endl;
  
    
    }
}