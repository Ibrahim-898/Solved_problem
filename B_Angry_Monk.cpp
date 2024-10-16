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
    int n,k,ans=0;
    cin >> n >> k;
    vector<int> v(k);
    for(int i=0;i<k;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<k-1;i++){
        if(v[i]==1) ans++;
        else{
            ans+=(2*(v[i])-1);
        }
    }
    cout << ans << endl;
    
    
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
strin

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                string a;
                while(!st.empty() && st.top!='('){
                    a.push_back(st.top());
                    st.pop();
                }
                if(!st.empty() && st.top()=='(') st.pop();
                cout << a << endl;
                for(auto u:a){
                    st.push(u);
                }
             }
            
            else st.push(s[i]);
        }
        string ans;
        for(auto u:st){
            ans.push_back(u);
        }
        reverse(ans.begin(),ans.end());
        
        return "HELLO=";
        
    }
};