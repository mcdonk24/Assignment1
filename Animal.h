#ifndef Animal_h
#define Animal_h

#include <string>
using namespace std;

class Animal {
public:		//9.correct use of public, private, protected
	Animal(string);
	Animal(string, int);//1.overloading
	virtual int number()=0; //6.Abstract class
	void display();
protected:	//9.correct use of public, private, protected
	string name;
	int sleep;
};

#endif
