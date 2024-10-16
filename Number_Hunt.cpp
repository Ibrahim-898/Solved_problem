#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n){
    for(long long i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    long long x;
	    cin >> x;
        if(x==1) {
            cout << 6<< endl;
            return;
        }
	    if(isprime(x)){
           // cout << x << endl;
	        long long  i=x+1;
	        while(!(isprime(i))){
	            i++;
	        }
	        cout << i*x << endl;
	    }
	    else{
	        long long i=x+1;
	        while(!(isprime(i))){
	            i++;
	        }
	        long long ans = i;
	        long long j=i+1;
	        while(!(isprime(j))){
	            j++;
	        }
	        ans*=j;
	        cout << ans << endl;
	    }
	

}

int main() {
	int t;
	cin >> t;
	while(t--){
        solve();
    }
	    

}
