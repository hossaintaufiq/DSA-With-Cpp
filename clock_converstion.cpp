#include<bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){
	int t;
	cin>>t; 

	while(t--){
		string s;
		cin>>s;

		string a=s.substr(0,2);
		string c=s.substr(3,5);

		int b=stoi(a);
		if(b>=12){

			if(b==12){
				cout<<to_string(b)+":"+c<<" PM";
			}

			if(b>12){
				int d=b-12;
			if(d<10){
				cout<<"0"+to_string(d)+":"+c<<" PM";
			}
			else{
				cout<<to_string(d)+":"+c<<" PM";
			}
			}
			
			
		}
		else{
			if(b==0){
			b=12;
		}
			if(b<10){
				cout<<"0"+to_string(b)+":"+c<<" AM";
			}
			else{
				cout<<to_string(b)+":"+c<<" AM";
			}
		}
		cout<<endl;

		
}}