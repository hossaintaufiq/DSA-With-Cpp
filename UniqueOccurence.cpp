#include<bits/stdc++.h>
using namespace std; 

int main(){
	int a[1001];



	for(int i=0;i<sizeof(a);i++){
		cin>>a[i];
	}

	// for(int i=0;i<sizeof(a);i++){
	// 	cout<<a[i];
	// }

	int cont_length= end(a)-begin(a);
	int size=sizeof(a) ;
	// int length= a.size();
	cout<<size<<" "<<" "<<cont_length;
}