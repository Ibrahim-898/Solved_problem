#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,m,f=1;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    if(n!=m){
        cout << "NO" << endl;
    }
    else{
    while(!st.empty()){
        if(st.top()!=q.front()){
            cout << "NO" << endl;
            f=0;
            break;
        }
        
        st.pop();
        q.pop();  
    }
        if(f) cout << "YES" << endl;
    }
}
