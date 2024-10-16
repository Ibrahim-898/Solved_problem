
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,q,cnt =0;
    cin >> n >> q;
    string a ,b;
    cin >> a >> b;
    reverse(b.begin(),b.end());
    a= a+b;
    for(int i=0;i<n+q-1;i++){
        if(a[i]==a[i+1])cnt++;
    }
    if(cnt>1) cout << "NO" << endl;
    else cout << "YES" << endl;
    vector<int> v{5,2,1,2,3,2,5};
   auto it = unique(v.begin(),v.end());
   v.resize(distance(v.begin(),it));
    for(auto u:v){
        cout << u << " ";
    }
    cout << endl;
    vector<int> st;
    for(int i=0;i<n;i++){
        if(!st.find(v[i])){
            st.push(v[i]);
        }
    }
    for(auto u:st){
        cout << u << " ";

    }
    cout << endl;
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

