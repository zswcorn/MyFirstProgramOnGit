#include "MainFunction.h"

void main(){
// 	string name;	
// 	cin>>name;
// 	FirstClass *firstclass = new FirstClass(name);
// 	name = "W";
// 	firstclass->Onscreen(name);

	//Student *stu = new Student("Tom",1);
	//Teacher *tea = new Teacher("Leo",2);
	People *stu = new Student("Tom",1);
	People *tea = new Teacher("Leo",2);

	stu->introduce();
	tea->introduce();

	delete stu;
	delete tea;

	system("pause");
}