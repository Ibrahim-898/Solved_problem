#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word,prevword;
    stringstream ss(s);
    map<string,int> mp;
    int prevmax=0,mx=0;
    while(ss>>word){
        mp[word]++;
        if(mp[word]>prevmax){
           // if(prevword!=word) cout << prevword << " " << prevmax << endl;
            prevmax = mp[word];
            prevword = word;

        }
    }
    cout << prevword << " " << prevmax << endl;
}