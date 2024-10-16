//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
      string a,b,s;
      getline(cin,s);
        vector<string> v; 
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && a.size()>0) {
              v.push_back(a);
              a.clear();
            }
            else {
                if(s[i]!=' ') a+=s[i];
                if(i==s.size()-1) v.push_back(a);
            }
        }
        reverse(v.begin(),v.end());
        for(auto u:v){
            b+=u;
            b+=' ';
        }
        b.pop_back();
        b+='"';
        cout << b  << endl;
}
int main()
{
    ios();
    
        solve();

    
}