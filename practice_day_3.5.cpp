// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int a,b;
// 	char ch;
// 	cin>>a>>ch>>b;

// 	switch(ch){
// 	case '<':
// 		if(a<b){
// 			cout<<"Right";
// 		}
// 		else cout<<"Wrong";

// 		break;


// 	case '>':
// 		if(a>b){
// 			cout<<"Right";
// 		}
// 		else cout<<"Wrong";

// 		break;


// 	case '=':
// 		if(a==b){
// 			cout<<"Right";
// 		}
// 		else cout<<"Wrong";

// 		break;

	

// default : 
// 	cout<<"wrong";

// }
// }




#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cin>>n ;

	int a[n];

	for(int i=0;i<n; i++){
		cin>>a[i];
	}

	sort(a,a+n);

	for(int i=0;i<n; i++){
		cout<<a[i]<<" ";
	}
}