#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        int n,one=-1,two=-1,three=-1;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==1) one=i+1;
            if(v[i]==2) two=i+1;
            if(v[i]==3) three=i+1;
        }
        
            if((one<two && two<three) || (two<three && three<one) ) cout << two << " " << three << endl;
            else if((two<one &&  one<three) || (three<one && one<two)) cout << one << " " << three << endl;
            else if(three<two && two<one) cout << three << " " << two << endl;
            else cout <<  one<< " " << one << endl;
        
       
    }
}