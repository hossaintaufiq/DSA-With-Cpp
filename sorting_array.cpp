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



// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	char s[10e5+1];
	

// 	while(cin>>s){

		
// 		int l= (int)s.size();
// 		int a[l];

// 		for(int i=0;i<l;i++){
// 			int x= (int)s[i];
// 			a[i]=x;
// 			// cout<<s[i]<<" ";
// 		}

// 		sort(a,a+l);

// 		for(int i=0;i<l; i++){


// 			char ch= (char)a[i];
// 			if(ch==' '){
// 				continue;
// 			}
// 			else{
// 				cout<<ch;
// 			}
			

// 			}

// 		// cout<<s<<endl;
// 			cout<<endl;
// 	}
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100001]; 
    char a[100001]; 

    
    while (cin.getline(s, 100001)) {
        int l = strlen(s);
        int idx = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] != ' ') {
                a[idx++] = s[i];
            }
        }
       
        sort(a, a + idx);
        for (int i = 0; i < idx; i++) {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
} 
