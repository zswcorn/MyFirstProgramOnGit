#include "MainFunction.h"

void main(){
	string name;
	name = "W";
	cin>>name;
	FirstClass *firstclass = new FirstClass(name);
	firstclass->Onscreen(name);
}