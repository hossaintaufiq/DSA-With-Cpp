#include<bits/stdc++.h>
using namespace std; 

int main(){
	int *a=new int [4];
	int *b=new int [4];
	 for(int i=0;i<4;i++) {
	 	cin>>a[i];
	 	b[i]=a[i];
	 }

	 delete [] a;

	 a = new int[7];

	 for(int i=0;i<4 ;i++){
	 	a[i]=b[i];
	 }

	 delete[] b;

	 a[4]=9;
	 a[5]=10;
	 a[6]=16;

	 for(int i=0;i<7;i++){
	 	cout<<a[i]<<" ";
	 }
	 	

	 	

	 	


}