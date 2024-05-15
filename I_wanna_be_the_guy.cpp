// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int n; 
// 	cin>>n ;

// 	for(int i=1;i<=n;i++){
// 		cout<<i<<" ";
// 	}
// 	cout<<endl;

// 	int x;
// 	cin>>x;
// 	int a[x];
// 	for(int i=0;i<x;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<x;i++){
// 		cout<<a[i];
// 	}
// 	cout<<endl;
// 	int y;
// 	cin>>y;
// 	int b[y];
// 	for(int i=0;i<x;i++){
// 		cin>>b[i];
// 	}
// 	for(int i=0;i<x;i++){
// 		cout<<b[i];
// 	}
// }

// new code 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> array[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i];
    }

    sort(array , array+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(array[i] != array[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}