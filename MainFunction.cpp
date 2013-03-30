#include "MainFunction.h"

void main(){
	string name;	
	cin>>name;
	FirstClass *firstclass = new FirstClass(name);
	name = "W";
	firstclass->Onscreen(name);
}