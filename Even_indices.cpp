#include<bits/stdc++.h>
using namespace std; 

void even_indices(int a[],int n,int i){
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	if(i<0){
		return;
	}
	if(i%2==0){
		cout<<a[i]<<" ";
	}
	
	even_indices(a,n,i-1);

}

int main(){
	int n; 
	cin>>n; 
	int a[n];

	for(int i=0;i<n; i++){
		cin>>a[i];
	}
	even_indices(a,n,n-1);
}