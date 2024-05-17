#include<bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){
	// vector<int>v;  

	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;
	
	// v.push_back(1);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;

	// v.push_back(2);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;


	// v.push_back(3);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;
	// v.push_back(4);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;

	// v.push_back(5);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;

	// v.resize(5);
	// cout<<"Size: "<<v.size()<<endl;
	// cout<<"Capacity: "<<v.capacity()<<endl;


	// looping in vectors

	int n; 
	cin>>n; 
	vector<int>v(n);


	// for(int i=0;i<n;i++){
	// 	int element;
	// 	cin>>element;
	// 	v.push_back(element);

	// 	// cin>>v[i];
	// }

	// another way to take input 

	for(int i=0;i<n; i++){
		cin>>v[i];
	}




	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	// another way for output

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	} 
	cout<<endl;

	// using for each loop 

	for(int ele:v){
		cout<<ele<<" ";
	}
	cout<<endl;

	// using while loop 

	v.erase(v.end()-2);





	int idx=0;
	while(idx<v.size()){
		cout<<v[idx++]<<" ";
		// idx++;
	}

	cout<<endl;





}