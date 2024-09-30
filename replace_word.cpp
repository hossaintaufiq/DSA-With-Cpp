// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int t; 
// 	cin>>t; 

// 	while(t--){
// 		string x,y; 

// 		cin>>x>>y; 

// 		// cout<<x<<" "<<y;
// 		for(int i=0;i<x.length();i++){
// 			size_t found = x.find(y);
//   if (found != string::npos)
//     cout << "First occurrence is " << 
//              found << endl;
// 		}
		
   
//   // Find next occurrence of "geeks".
//   // Note here we pass
//   // "geeks" as C style string.
//   // char arr[] = "geeks";
//   // found = x.find(arr, found+1);
//   // if (found != string::npos)
//   //   cout << "Next occurrence is " << 
//   //            found << endl;
 
// 		cout<<endl;
// 	}
// }


// new code 

// C++ Program to Replace all the occurences Substring in a 
// String 
// #include <iostream> 
// #include <string> 

#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 

	int t; 
	cin>>t;

	while(t--){
		
	string x,y;
 
	cin>>x>>y;

	string output = "#"; 


	size_t pos = x.find(y); 

	while (pos != string::npos) { 
		
		// x.replace(pos, y.size(), output); 
		x.replace(pos, y.size(), output);

		pos = x.find(y, pos + output.size()); 
	} 

	cout << x << endl; 
	}
	

	
}

