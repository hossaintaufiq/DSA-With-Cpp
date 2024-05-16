#include<bits/stdc++.h>
using namespace std; 

int finduplicate(int a[],int n){
	int ans =0;
	// xor ing all 

	for(int i=0;i<n;i++){
		ans=ans^a[i];
	}
	for(int i=1;i<n;i++){
		ans=ans^i;
	}

	return ans;
}

int main(){
	int t; 
	cin>>t; 

	while(t--){
		int n; 
		cin>>n; 
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int duplicate = finduplicate(a,n);
		cout<<duplicate<<endl;
	}
}