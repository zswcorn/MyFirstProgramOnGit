#include "People.h"

class Student:public People
{
public:
	Student(string thename,int theID);
	void introduce();
};