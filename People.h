#ifndef _HEADERNAME_H
#define _HEADERNAME_H
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class People
{
public:
	People(string thename,int theID);
	virtual void introduce();
	//void introduce();
protected:
	string name;
	int ID;
};

#endif