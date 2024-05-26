// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	 cout<<"Hello world";
// }

#include<bits/stdc++.h>
using namespace std;
int* get_array(int a){ 
    int *x=new int[a];
    for(int i=0;i<a;++i){
        cin>>x[i];
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int *x=get_array(n);
    for(int i=0;i<n;++i){
        cout<<x[i]<<" ";
    }
     cout<<endl;
    delete[] x;
}
