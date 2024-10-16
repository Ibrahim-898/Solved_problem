#include<bits/stdc++.h>
using namespace std;
int main()
{
   int q;
   cin >> q;
   list<int> ls;
   while(q--){
    int x,v;
    cin >> x >> v;
    if(x==0) ls.push_front(v);
    else if(x==1) ls.push_back(v);
    else{
        if(v<ls.size()){
          
        ls.erase(next(ls.begin(),v));
        }
    }
    cout << "L -> ";
    for(auto u:ls){
        cout << u << " ";
    }
    cout << endl;
    cout << "R -> ";

    for(auto it = ls.end();it!=ls.begin();){
        it--;
        cout << *it << " ";
    }
    cout << endl;
   }
}