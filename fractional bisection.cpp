//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define dl double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int  mx=1e7+2;
int arr[mx];
int main()
{
   
    
    dl n;
    cin >> n;
    dl hi=n,lo=0,mid;
    dl eps=1e-8;
    while(hi-lo>=eps){
        mid=(hi+lo)/2;
        if(mid*mid<=n){
            lo=mid;
        }
        else hi=mid;
    }
    cout << setprecision(10) <<  lo <<  endl;
    

}