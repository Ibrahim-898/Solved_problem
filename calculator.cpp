#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    double a,b;
    char c;
    cin >> a >> c >> b;
    if(c=='+') cout << a+b << endl;
    else if(c=='-') cout << a-b << endl;
    else if(c=='*') cout << a*b << endl;
    else if(c=='/') cout << a/b << endl;
    else if(c=='%')  cout << a/100 << endl;
}