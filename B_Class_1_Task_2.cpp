#include<bits/stdc++.h>
using namespace std;
const int lim = 1e7+10;
int mx[lim];
int main()
{
    
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            mx[j]++;
        }
    }
    
    long long n,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        sum+=1LL*i*mx[i];
    }
            cout << sum<< endl;
    


}

