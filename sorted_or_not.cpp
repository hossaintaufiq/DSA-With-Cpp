// #include<bits/stdc++.h>
// #include<vector>

// using namespace std; 

// int main(){
// 	int n;
// 	cin>>n; 

// 	vector<int>a;
	

// 	for(int i=0;i<n; i++){
// 		int element;
// 		cin>>element;
// 		a.push_back(element);
// 	}

//    vector<int>b(a.size());
// 	for(int i=0;i<a.size(); i++){
// 		b[i]=a[i];
// 	}


// 	for(int i=0;i<b.size()-1; i++){
// 		for(int j=i+1;j<b.size();j++){
// 			if(b[i]>b[j]){
// 				int temp=b[i];
// 				b[i]=b[j];
// 				b[j]=temp;
// 			}
// 		}
// 	} 


// 	// for(int element:b){
// 	// 	cout<<element<<" ";
// 	// }


// 	bool result=true;

// 	for(int i=0;i<b.size();i++){
// 		if(a[i]!=b[i]){
// 			result=false;
// 		}

// 	}


// 	if(result){
// 		cout<<"Sorted";
// 	}
// 	else{
// 		cout<<"Not Sorted";
// 	}
// }


// another way (easy way)

#include<bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){
	int n; 
	cin>>n ;

	vector<int > a;

	for(int i=0;i<n; i++){
		int element;
		cin>>element;
		a.push_back(element);
	}

	bool flag=true;

	for(int i=1;i<a.size();i++){
		if(a[i]<a[i-1]){
			flag=false;\
			break;
		}
	}


	if(flag){
		cout<<"sorted";
	}
	else{
		cout<<"Not Sorted";
	}
}