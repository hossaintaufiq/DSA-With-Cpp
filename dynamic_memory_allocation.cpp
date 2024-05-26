#include<bits/stdc++.h>
using namespace std;


// int * fun(){
// 	int *a=new int ;
// 	*a=100;
// 	return a;
// }


int * array_return(){
	//int a[4];//static array won't work 


	// dynamic array 
	int *a = new int[5];

	for(int i=0;i<4;i++){
		cin>>a[i];
	}

	return a; 


}
int main(){

	// normal

	// int x=10;

	// dynamic memory

	// int *a= new int ;
	// *a=10;

	// float *b= new float;
	// *b=5.77664;



	// cout<<*a<<" "<<*b;

	// int *fn=fun();
	// cout<<*fn;



	// dynamic array 

	// int n;
	// cin>>n ;

	// int *a= new int[n];

	// for(int i=0;i<n; i++){
	// 	cin>>a[i];
	// }

	// for(int i=0;i<n; i++){
	// 	cout<<a[i];
	// }

	int *a=array_return();
	for(int i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
}