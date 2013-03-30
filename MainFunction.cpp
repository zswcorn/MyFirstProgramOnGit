#include "MainFunction.h"

void main(){
	string name;
	name = "W";
	cin>>name;
	cout<<"By git"<<endl;	
	FirstClass *firstclass = new FirstClass(name);
	firstclass->Onscreen(name);
}
