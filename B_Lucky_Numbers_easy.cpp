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
    int n,four=0,seven=0,digit=0,f=0;
    cin >> n;
    vector<int> v;
    while(n>0){
        int rem=n%10;
        digit++;
        n/=10;
        if(rem<4){
            v.push_back(4);
            four++;
        }
        else if(rem>4 && rem<7){
            v.push_back(7);
            seven++;
        }
        else if(rem==4 || rem==7){
            if(rem==4) four++;
            else seven++;
            v.push_back(rem);
        }
        if(rem>7){
            f=1;
        }
    }
    reverse(v.begin(),v.end());
    // for(auto u:v){
    //     cout << u;
    // }
    // cout << endl;
    if(f || digit%2){
        v.clear();
         if(f) digit+=2;
        else digit++;
        for(int i=0;i<digit;i++) {
            if(i<digit/2)v.push_back(4);
            else v.push_back(7);
        }
    }
    else{
        if(four>seven){
            for(int i=v.size()-1;i>=0;i--){
                if(v[i]==4) {
                    v[i]=7;
                    four--;
                    seven++;
                }
                if(four==seven) break;
            }
        }
        else if(four<seven){
            int i=0;
            while(four!=seven){
                if(v[i]==7){
                    v[i]=4;
                    four++;
                    seven--;
                }
                i++;
            }
        }
        
    }
    for(auto u:v){
        cout << u;
    }
    cout << endl;
    
    
}
int main()
{
    ios();
        solve();

    
}