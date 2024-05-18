// #include<bits/stdc++.h>
// using namespace std;


// void base_conversion(int n){


// 	cout<<n<<endl;
// }

// int main(){

// 	int t; 
// 	cin>>t; 

// 	while(t--){
// 		int n; 
// 		cin>>n;

// 		base_conversion(n);


// 	}
// }


// #include <iostream>
// using namespace std;

// // Function to convert a number to its binary representation using recursion
// string toBinary(int n) {
//     if (n == 0) return "";
//     return toBinary(n / 2) + (char)('0' + n % 2);
// }

// int main() {
//     int T;
//     cin >> T;  // Read number of test cases
//     while (T--) {
//         int N;
//         cin >> N;  // Read the number for each test case
//         string binary = toBinary(N);
//         // Special case for when N is 0, as the above function returns an empty string
//         if (binary.empty()) binary = "0";
//         cout << binary << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std; 

void base_conversion(int n){
	if(n==0 || n==1){
		cout<<n;
		return;
	}

	base_conversion(n/2);
	base_conversion(n%2);
}

int main(){

	int t; 
	cin>>t; 

	while(t--){
		int n; 
		cin>>n; 
		base_conversion(n);

		cout<<endl;
	}
}



