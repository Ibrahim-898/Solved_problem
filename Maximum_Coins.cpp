#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,n,ans=0;
	    cin >> x >> n;
	
	for(int i=1;i<=x-n;i++){
	    ans-=(1<<i);
	}
    for(int i=x;i>x-n;i--){
        ans+=(1<<i);
    }
   cout << ans << endl;
	}
}
