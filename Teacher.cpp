#include "Teacher.h"

Teacher::Teacher(string thename,int theID):People(thename,theID){}

void Teacher::introduce(){
	cout<<"this tea's name is "<<name<<" and ID is "<<ID<<endl;
}