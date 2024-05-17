#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int main(){
	int n;
	cin>>n; 

	vector<int>v;

	for(int i=0;i<n;i++){
		int element;
		cin>>element;
		v.push_back(element);
	}

	int x;
	cin>>x;


	int occurence=-1;
	// for(int i=0;i<v.size();i++){
	// 	if(v[i]==x){
	// 		occurence=i;
	// 	}
	// }

	// another method

	// for(int i=v.size()-1;i>=0;i--){
	// 	if(v[i]==x){
	// 		occurence=i;
	// 		break;
	// 	}
	// }
	int count=0;
	// 
	// for(int element:v){
	// 	if(element==x){
	// 		count++;
	// 	}
	// }

	for(int elements:v){
		if(elements>x){
			count++;
		}
	}





	cout<<count<<endl;







	// cout<<endl;
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;

	// cout<<v.end();
}