//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,
         const pair<int,int> &b){
    return(a.second<b.second);
}

 
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<5) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
}