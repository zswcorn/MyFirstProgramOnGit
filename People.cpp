#include "People.h"

People::People(string thename,int theID){
	name = thename;
	ID = theID;
}

void People::introduce(){
	cout<<"My name is "<<name<<"."<<endl;
}