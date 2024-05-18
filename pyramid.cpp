#include<bits/stdc++.h>

using namespace std; 

void pyramid(int n){
	// if(n==0){
	// 	return;
	// }
	// int s=n-1;
	if(n==0){
		return;
	}
	else{
		pyramid(n-1);
		// for(int j=n-1;j>=0;j++){
		// 	cout<<" ";
		// }
		for(int i=0;i<n;i++){
			cout<<"*";
		}
		cout<<endl;
	}

}




int main(){
	int n; 
	cin>>n; 

	pyramid(n);
}