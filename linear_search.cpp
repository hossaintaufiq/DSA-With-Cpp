#include<bits/stdc++.h>
using namespace std; 

bool search(int arr[], int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return true;
		}
	}
	return false ;
}

int main(){
	int n; 
	cin>>n ;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;

	bool result =search(a,n,key);

	if(result ){
		cout<<"The key is found";
	}
	else{
		cout<<"The key is missing ";
	}

}