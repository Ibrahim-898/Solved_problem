//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n;
    cin >> n;
    string s="VIGBOYR";
    vector<string> v(6);
    v[0]="B";v[1]="GB";v[2]="GBO";v[3]="IGBO";
    v[4]="VIGBO";v[5]="VIGBOR";
    int div=n/7,rem=n%7;
     
         while(div--)
    {
        cout << s;
    }
    if(rem>0)
    cout << v[rem-1] << endl;
    


   
}
