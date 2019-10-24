#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	
	

	cin>>t;
	

	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		set<char>v; 
		for(int j=0;j<s.size();j++){
			if(s[j]!=s[j+1]){
				v.insert(s[j]);
			}
			else
				j++;
		}
		for(auto x:v){
			cout<<x;
		}
		cout<<endl;
       
    }
}
