#include<bits/stdc++.h>
using namespace std; 


int power(int a, int b){
	int ans =1; 
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans; 
}

int main(){

	int t; 
	cin>>t; 

	while(t--){
		int a,b; 
		cin>>a>>b; 

		int result = power(a,b);

		cout<<result<<endl;
	}

}