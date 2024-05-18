#include<bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){
	int t; 
	cin>>t; 

	while(t--){
		int n; 
		cin>> n; 

		vector<int>a;

		for(int i =0;i<n; i++){
			int element;
			cin>>element;
			a.push_back(element);

		}

		sort(a.begin(),a.end());

		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
	}
}