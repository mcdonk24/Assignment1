#ifndef Carnivore_h
#define Carnivore_h

#include "Animal.h"

class Carnivore: public virtual Animal{

public:	//9.correct use of public, private, protected
	Carnivore(string, int);
	string eatmeat();
	void display();
	Carnivore operator + (Carnivore);
	virtual ~Carnivore();
private:	//9.correct use of public, private, protected
	float x = 7.6;
	int number();
	friend void sleepingAnimals(Carnivore &); //5.friend function

};

#endif
