#ifndef Herbivore_h
#define Herbivore_h

#include "Animal.h"

class Herbivore: public virtual Animal{

public:		//9.correct use of public, private, protected
	Herbivore(string, int);
	string eatplants();
	void display();
private:	//9.correct use of public, private, protected
	int number();
	static int setNumber; //15.static state
};

#endif
