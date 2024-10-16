
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first>b.first);
    else
     return (a.second<b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=52;
void solve(){
    int n,ans=0;
    cin >> n;
    vector<int> v(2*n);
    vector<pair<int,int>> odd,even;
    for(int i=0;i<2*n;i++) {
        cin >> v[i];
        if(v[i]%2==0) even.push_back({v[i],i+1});
        else odd.push_back({v[i],i+1});
    }
    int evensize = even.size(),oddsize = odd.size();
        if(oddsize%2 && evensize%2) {
            oddsize--; 
            evensize--;
        }
        else {
            if(oddsize > evensize) oddsize-=2;
            else evensize-=2;
        }
            for(int i=0;i<evensize;i+=2){
                cout << even[i].second << " " << even[i+1].second << endl;
            }
            for(int i=0;i<oddsize;i+=2){
                cout << odd[i].second << " " << odd[i+1].second << endl;
            } 
            //cout << "x" << endl; 
    

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