#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	read:
	while(t--){
		int n,k;
		cin>>n>>k;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mp[x]++;
		}

		vector<int> v;

		for(auto it : mp){
			if(it.second>=k){
				v.push_back(it.first);
			}
		}
		if(v.size()==0){
			cout<<-1<<endl;
			goto read;
		}
		sort(v.begin(),v.end());

		int l=v[0];
		int mn=INT_MIN;
		int ans_l=v[0],ans_r = v[0];


		for(int i=1;i<v.size();i++){
			if((v[i]-1)==v[i-1]){
				if(v[i]-l>mn){
					ans_l=l;
					ans_r=v[i];
					mn=v[i]-l;
				}
			}
			else{
				l=v[i];

			}
		}

		cout<<ans_l<<" "<<ans_r<<endl;

	}
}