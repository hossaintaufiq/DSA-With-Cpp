#include<bits/stdc++.h>
using namespace std; 

int main(){
	// int a,b; 
	// cin>>a>>b;

	// (a>b) ? cout<<"a bigger":cout<<"b bigger";

	int a, b, c, d; 
	cin>>a>>b>>c>>d;

	int mn= min({a,b,c,d});
	int mx= max({a,b,c,d});

	cout<<"Max value = "<<mx<<endl<<"Min value = "<<mn<<endl  ;

	swap(a,b);

	cout<<a<<b;




}