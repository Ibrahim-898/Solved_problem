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
    // ? :
}
const int N=100;
void solve() {
        vector < int > big;
        vector <int> small;

        string str;
        cin>>str;

        for(int i = 0; i < str.length(); i++){
            if(str[i] != 'B' && (str[i] >= 'A' && str[i] <= 'Z')){
                big.push_back(i);
            }
            if(str[i] != 'b' && (str[i] >= 'a' && str[i] <= 'z')){
                small.push_back(i);
            }
            if(str[i] == 'B' && big.empty() != true){
                str[big.back()] = '*';
                big.pop_back();
            }
            if(str[i] == 'b' && small.empty() != true){
                str[small.back()] ='*';
                small.pop_back();
            }
        }

       

        for(int i = 0;i < str.length(); i++){
            if(str[i] == '*' || str[i] == 'B' || str[i] == 'b')
                continue;
            cout<<str[i];
        }
        cout<<endl;
   
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}
