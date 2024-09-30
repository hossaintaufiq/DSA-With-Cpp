// #include<bits/stdc++.h>
// using namespace std; 

// class Students{
// public: 
// 	int id;
// 	string name;
// 	char Section;
// 	int total_marks;

// 	Students(int id,string name,char Section,int total_marks){
// 		this->id=id;
// 		this->name=name;
// 		this->Section=Section;
// 		this->total_marks=total_marks;
// 	}
// };



// int main(){
// 	int t;
// 	cin>>t; 

// 	while(t--){
// 		int id;
// 		string name;
// 		char Section;
// 		int total_marks;

// 		cin>>id>>name>>Section>>total_marks;

// 		Students student1(id,name,Section,total_marks);

// 		int id2;
// 		string name2;
// 		char Section2;
// 		int total_marks2;

// 		cin>>id2>>name2>>Section2>>total_marks2;

// 		Students student2(id2,name2,Section2,total_marks2);


// 		int id3;
// 		string name3;
// 		char Section3;
// 		int total_marks3;

// 		cin>>id3>>name3>>Section3>>total_marks3;

// 		Students student3(id3,name3,Section3,total_marks3);

// 		int mx=max({student1.total_marks,student2.total_marks,student3.total_marks});

// 		// if(student1.total_marks>student2.total_marks && student1.total_marks>student3.total_marks){
// 		// 	cout<<student1.id<<" "<<student1.name<<" "<<student1.Section<<" "<<student1.total_marks<<endl;
// 		// }
// 		// else if(student2.total_marks>student3.total_marks ){
// 		// 	cout<<student2.id<<" "<<student2.name<<" "<<student2.Section<<" "<<student2.total_marks<<endl;
// 		// }
// 		// else {
// 		// 	cout<<student3.id<<" "<<student3.name<<" "<<student3.Section<<" "<<student3.total_marks<<endl;
// 		// }

// 		cout<<mx<<endl;
		

// 	}
// }

#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;


         Student(int id, string name, char section, int totalMarks){
         	this->id=id;
         	this->name=name;
         	this->section=section;
         	this->totalMarks=totalMarks;
         }
        

    
    void result() {
        cout << id << " " << name << " " << section << " " << totalMarks << endl;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student* students[3];

        
        for (int i = 0; i < 3; ++i) {
            int id, totalMarks;
            string name;
            char section;
            cin >> id >> name >> section >> totalMarks;
            students[i] = new Student(id, name, section, totalMarks);
        }

        Student* topStudent = students[0];
        for (int i = 1; i < 3; ++i) {
            if (students[i]->totalMarks > topStudent->totalMarks || 
                (students[i]->totalMarks == topStudent->totalMarks && students[i]->id < topStudent->id)) {
                topStudent = students[i];
            }
        }

        topStudent->result();

    
        for (int i = 0; i < 3; ++i) {
            delete students[i];
        }
    }

    return 0;
}
