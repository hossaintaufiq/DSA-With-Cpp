#include<bits/stdc++.h>
using namespace std; 

int main(){
	int N; 
	cin>>N; 

	int i=N; 
	bool result=false;

	while(i!=0){
		if(i%10== 7) {
			result=true; 
			break;}


		i=i/10;
	}

	if(result){
		cout<<"Yes";
	}
	else cout<<"No";
}