#include<bits/stdc++.h>
using namespace std; 

void printArray(int arr[],int n);
void reverse(int arr[], int n){
	int start =0;
	int end =n-1;

	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}

	printArray(arr,n);

	
}

void printArray(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}

int main(){
	int n;
	cin>>n; 
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	reverse(a,n);
	printArray(a,n);

	
}