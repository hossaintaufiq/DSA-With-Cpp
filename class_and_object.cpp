// #include<bits/stdc++.h>
// using namespace std; 

// class student {
// public: 
// 	string name;
// 	int roll;
// 	double cgpa;

// };

// int main(){

// 	student*a= new student();


// 	a->name="Hossain Ahmmed Taufiq";
// 	a->roll=2;
// 	a->cgpa=3.5;

// 	cout<<a->name<<endl;
// 	cout<<a->roll<<endl;
// 	cout<<a->cgpa<<endl;

// }

// #include<bits/stdc++.h>
// using namespace std; 

// class Student{
// public: 
// 	string name;
// 	int roll; 
// 	int cls;
// 	double cgpa;

// 	// constructor
// 	Student(string name, int roll, int cls, double cgpa){
// 		// name=n;
// 		// roll=r;
// 		// cls=c;
// 		// cgpa=cg;
// 		this->name=name;
// 		this->roll=roll;
// 		this->cls=cls;
// 		this->cgpa=cgpa;
// 	}
// };

// int main(){

// 	Student Rahim("Rahim Rahman", 22, 10, 3.66);

// 	cout<<"Name "<<" "<<" Roll "<<" "<<" Class "<<" "<<" Cgpa "<<endl;
// 	cout<<Rahim.name<<" "<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.cgpa<<endl;
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std ;

class Student{
public: 
	string name;
	int roll;
	int serial;
	int id;


	Student(string name, int roll, int serial, int id){
		this->name=name;
		this->roll=roll;
		this->serial= serial;
		this->id=id;
	}

};

Student Calling_function(){
	Student student1("Hossain Ahmmed Taufiq", 1, 1, 2232);
	return student1;
}

int main(){

	Student Student1= Calling_function();
	cout<<Student1.name<<endl<<Student1.roll<<" "<<Student1.serial<<" "<<Student1.id<<endl;

	return 0;

}