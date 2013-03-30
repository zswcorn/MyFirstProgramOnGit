#include "Student.h"

Student::Student(string thename,int theID):People(thename,theID){
}

void Student::introduce(){
	//People::introduce();
	cout<<"this stu's name is "<<name<<" and ID is "<<ID<<endl;
}