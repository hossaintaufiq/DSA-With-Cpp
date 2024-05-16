#include<bits/stdc++.h>
using namespace std; 

int factorial(int n){
	int fact =1; 

	for(int i=1; i<=n;i++){
		fact*=i;

	}
	return fact;
}

int ncr(int n, int r){
	int num=factorial(n);

	int denom=factorial(r)*factorial(n-r);

	return num/denom;
}


int  main()
{
	/* code */
	// int n; 
	// cin>>n;

	// int fact=factorial(n);
	// cout<<fact;

	int n,r;
	cin>>n>>r;
	int result= ncr(n,r);
	cout<<result;
	return 0;
}