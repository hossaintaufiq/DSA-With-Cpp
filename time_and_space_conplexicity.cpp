#include<bits/stdc++.h>
#include<vector> 

using namespace std; 

int main(){
	// cout<<"All about DSA and web development "; 
	// int n; 
	// cin>>n ;

	// vector<int>V;

	// for(int i=0;i<n; i++){
	// 	int element; 
	// 	cin>>element;
	// 	V.push_back(element);
	// }


	// // output
	// for(int i=0;i<V.size();i++){
	// 	cout<<V[i]<<" ";
	// }

	// claculator 

	double n; 
	cin>>n; 

	if(n<=50.00 && n>=0.00){
		cout<<"F";
	}
	else if(n<=60.00 && n>=51.00){
		cout<<"D";
	}
	else if(n<=70.00 && n>=61.00){
		cout<<"C";
	}
	else if(n<=80.00 && n>=71.00){ 
		cout<<"B";
	}
	else if(n<=100.00 && n>=81.00){
		cout<<"A";
	}
	else cout<<"Invalid input";
}