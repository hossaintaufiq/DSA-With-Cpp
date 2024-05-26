// #include<bits/stdc++.h>
// // #include<vector>
// using namespace std; 

// int main(){
// 	int n; 
// 	cin>>n; 

	// vector<int>a(n);
	// int a[n];

	// for(int i=0;i<n; i++){
	// 	cin>>a[i];
	// }

	// sort(a,a+n);

	// for(int i=0;i<n; i++){
	// 	cout<<a[i]<<" ";
	// }

	// cout<<endl;

	// sort(a,a+n,greater<int>());


	// for(int i=0;i<n; i++){
	// 	cout<<a[i]<<" ";
	// }
// }



// #include<bits/stdc++.h>
// using namespace std; 

// int *sort_it(int n){
// 	int *a = new int[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}

// 	sort(a,a+n,greater<int>());

// 	return a;

// }

// int main(){
// 	int n;
// 	cin>>n; 

// 	int *a = sort_it(n);

	// for(int i=0;i<n; i++){
	// 	cout<<a[i]<<" ";
	// }

// }



#include<bits/stdc++.h>
using namespace std; 

int main(){
	string s;
	

	while(getline(cin,s)){

		int a[s.length()];
		int l= s.length();

		for(int i=0;i<s.length();i++){
			int x= (int)s[i];
			a[i]=x;
			// cout<<s[i]<<" ";
		}

		sort(a,a+l);

		for(int i=0;i<s.length(); i++){


			char ch= (char)a[i];
			if(ch==' '){
				continue;
			}
			else{
				cout<<ch;
			}
			

			}

		// cout<<s<<endl;
			cout<<endl;
	}
}