#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int main(){
	cout<<"binary search "<<endl; 

	int n; 
	cin>>n; 
	vector<int> v; 

	for(int i=0;i<n; i++){
		int value; 
		cin>>value; 
		v.push_back(value);
	}

	sort(v.begin(),v.end());

	cout<<endl;

	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	int start=0;
	int end=n-1;
	int x;
	cin>>x; 
	bool flag=false;

	while(start<=end){
		int midIndex=(start+end)/2;

		if(v[midIndex]==x){
			// cout<<"Found";
			flag=true;
			break;
		}
		else if(x>v[midIndex]){
			start=midIndex+1;
		}
		else if(x<v[midIndex]){
			end=midIndex-1;
		}
	}

	if(flag){
		cout<<"Found";
	}
	else{
		cout<<"Not found";
	}


}