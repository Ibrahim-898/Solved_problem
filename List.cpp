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
 
int main()
{
    int n;
    cin >> n;
    list<int> ls,newlist;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
         ls.push_back(x);
         v.push_back(x);    
         }

    //ls.insert(next(ls.begin(),2),100);
    ls.insert(next(ls.begin(),3),v.begin(),v.end());
   // ls.erase(next(ls.begin(),5));
    ls.erase(next(ls.begin(),2),next(ls.begin(),4));
    //ls.sort();
    //ls.sort(greater<int> ()); // sort in decending order
    ls.remove(2); // remove all 2
    ls.reverse();
    cout << ls.front() << endl;
    cout << ls.back() << endl;
    for(auto it = ls.begin();it!=ls.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}