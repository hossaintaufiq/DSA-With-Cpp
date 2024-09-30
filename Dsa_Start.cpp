#include <iostream>
using namespace std;

void increment(int *v) {
    (*v)++;
}

int main() {
   int x=4;
   int *ptr_to_int= new int; 
   // * -> derefarance operator
   *ptr_to_int=5;

   cout<<ptr_to_int<<endl; 
   cout<<*ptr_to_int<<endl; 


   delete ptr_to_int;
   int n; 
   cin>>n; 
   double *array= new double[n];

   for(int i=0;i<n; i++){
    cin>>array[i];
   }

   for(int i=0;i<n; i++){
    cout<<array[i];
   }

   delete [] array;  


   return 0; 
}  
