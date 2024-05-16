#include<bits/stdc++.h>
using namespace std; 


int sum(int a[],int n){
	int sumation=0;
	for(int i=0;i<n;i++){
		sumation+=a[i];
	}
	return sumation ;
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
		int result = sum(a,n);
		cout<<result<<endl;

	}

}