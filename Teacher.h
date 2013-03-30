#include "People.h"

class Teacher:public People
{
public:
	Teacher(string thename,int theID);
	void introduce();
};