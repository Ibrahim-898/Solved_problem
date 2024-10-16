//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define dl double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
int main()
{
    ios();
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
      
    }
    int i=0,j=n-1,dima=0,sereja=0,cnt=1;
    while(i<=j){
        if(v[j]>v[i]){
             if(cnt%2!=0) {
                sereja+=v[j];
             j--;
             cnt++;
             }
             else {
                dima+=v[j];
                j--;
                cnt++;
             }
        }
        else
        {
            if(cnt%2!=0) {
                sereja+=v[i];
             i++;
             cnt++;
             }
             else {
                dima+=v[i];
                 i++;
                cnt++;
             }

        }
    }
        
    cout <<  sereja << " " << dima << endl;

}