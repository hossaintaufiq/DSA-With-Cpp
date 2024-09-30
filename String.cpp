#include<bits/stdc++.h>
using namespace std; 

// int main(){
// 	// int x;
// 	// cin>>x; 
// 	// string s;
// 	// cin>>s; 
// 	// cin.ignore();
// 	// getline(cin,s);

// 	// string b=" Ahmmed";

// 	// s.append(b);//s+b

// 	// s.push_back('A');


// 	// cout<<x<<endl;
// 	// cout<<s<<endl;
// 	// for(auto it=s.begin();it<s.end();it++){
// 	// 	cout<<*it<<endl;
// 	// }



// 	// cout<<s<<endl; 

	// string s; 
	// getline(cin,s);

	// stringstream ss(s);
	// string word;

	// // ss>>word;
	// // cout<<word<<endl;
	// // ss>>word;
	// // cout<<word<<endl;

	// while(ss>>word){
	// 	cout<<word<<endl;
	// }


// }


 // int main(){
 // 	// string s="hello world";
 // 	// string s("hello world");
 // 	// string s("hello world",4);//will print before character 

 // 	// after character

 // 	// string a= "Hello world";
 // 	// string s(a,4);

 // 	// n times

 // 	// string s(5,'y');

 // 	string s;
 // 	cin>>s; 

 // 	for(char ch:s){
 // 		cout<<ch<<endl;
 // 	}


 // 	cout<<s<<endl;
 // }

// bool print(stringstream &ss){
// 	// s="world";
// 	string word;
// 	if(ss>>word){
// 		// cout<<word<<endl;//normal print 
// 		print(ss);
// 		// for reverse print 

// 		if(word=="Jessica"){
// 			return true;
// 		}
		
// 	}

// 	return false;

// }


int main(){
	// string s="hello";
	// string s;
	// getline(cin,s);
	// stringstream ss(s);
	// if(print(ss)==true){
	// 	cout<<"YES";
	// }

	// else {
	// 	cout<<"NO";
	// }
	// // cout<<s<<endl;
	// return 0;


	string s; 
	getline(cin,s);

	stringstream ss(s);
	string word;

	// ss>>word;
	// cout<<word<<endl;
	// ss>>word;
	// cout<<word<<endl;
	bool value  =false ;
	while(ss>>word){
		// cout<<word<<endl;
		if(word=="Jessica"){
			value= true;
		}
	}

	if(value){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}