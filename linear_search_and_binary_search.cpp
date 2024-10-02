#include<bits/stdc++.h>
using namespace std; 

 void linearSearch(int*a,int n, int val){

 	bool result =false ;
 	int count; 
	for(int i=0;i<n;i++){
		if(a[i]==val) {
			result=true;
			count=i; 
			break;
		}
		
	}

	if(result){
		cout<<"Found at index : "<<count ; 
	}
	else {
		cout<<"Not found";
	}


	
}

void binarySearch(int*a,int n, int val){

	
}

int main(){
	cout<<"<<<--------------Linear search---------------->>> "<<endl<<endl;
	int n; 
	cin>>n; 
	int *array = new int [n];

	for(int i=0;i<n; i++){
		cin>>array[i];
	}

	

	int value;
	cin>>value;
 	linearSearch(array, n, value);
 	cout<<endl;
 	cout<<endl;

 	


 	// sort(first, last );


 	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}


	return 0; 

}