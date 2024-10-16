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
}
const  ll N=1e6+12;
vector<ll> cube(){
    vector<ll> cubes;
    for(ll i=1;i*i*i<=N;i++){
        cubes.push_back(i*i*i);
    }
    return cubes;
}
void sum(string s){
}
void solve() {
   int n,f=1,indx;
   cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
     cin >> v[i];
    /*if(v[i]>0 && f==1){
        indx=i;
        f=0;
    }
    if(v[i]<0 && f==0){
        if(v[indx]<=abs(v[i])){
             v[i]+=v[indx];
            v[indx]=0;
            f=1; 
        }
        else{
            v[indx]+=v[i];
            v[i]=0;
        }*/
    //}
   }
   /*for(auto u:v){
    cout <<   u << " ";
   }
   cout << endl;*/
   ll i=0,j,plus=0;
   while(1){
    if(i==n-1) break;
    if(v[i]<=0) i++;
    else {
        j=i+1;
        while(v[j]>0 && j<n){
            j++;
        }
        if(v[i]<=abs(v[j])){
            v[j]+=v[i];
            v[i]=0;
            i++;
            cout << i << " " << j << endl;
        }
        else
        {
            v[i]+=v[j];
            v[j]=0;
            cout << i << " " << j << endl;
        }
        }
    
   }
   for(auto u:v){
    //if (u>0) plus+=u;
    cout << u << " ";
   }
   cout <<  endl; 
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