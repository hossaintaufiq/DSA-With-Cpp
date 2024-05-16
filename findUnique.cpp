#include<bits/stdc++.h>
using namespace std ;

int findUique(int a[],int n){
	int ans =0;

	for(int i=0;i<n;i++){
		ans=ans^a[i];
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
		for(int i=0;i<n; i++){
			cin>>a[i];
		}

		int result = findUique(a,n);

		cout<<result <<endl; 
	}
}
