#include<bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){

	int t;
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 

		vector<int>arr;
		vector<int>a;

		for(int i=0;i<n; i++){
			int element;
			cin>>element;

			arr.push_back(element);
			// cin>>arr[i];
		}

		int key;
		cin>>key;

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]+arr[j]==key){
					cout<<arr[i]<<" "<<arr[j]<<endl;
					// vector<int>temp;
					// a.push_back(min(arr[i],arr[j]));
					// a.push_back(max(arr[i],arr[j]));

					// sort(a.begin(),a.end());

					// cout<<a[i]<<a[j];
					// a.push_back(temp);

				}
			}
		}

		// for(int i=0;i<arr.size(); i++){
		// 	cout<<arr[i]<<" ";
		// }

		// sort(a.begin(),a.end());

		// for(int i=0;i<a.size();i++){
		// 	cout<<a[i]<<endl;
		// }

		cout<<endl;

	}

}
