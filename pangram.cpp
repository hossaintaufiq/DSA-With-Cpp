#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cin>>n;
	string s;
	cin>>s;

	int alphabate[26]={0};

	for(int i=0;i<n;i++){
		char ch= tolower(s[i]);
		int x=ch-97;
		// cout<<s[i]<<" - "<<x<<endl;
		alphabate[x]++;

	}

	bool result=true;

	for(int i=0;i<26;i++){
		// cout<<alphabate[i]<<endl;
		
		if(alphabate[i]==0){
			result =false;
			break;
		}
	}

	if(result==true){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

}