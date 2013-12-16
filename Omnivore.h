#ifndef OMNIVORE_H_
#define OMNIVORE_H_

#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"

class Omnivore: public Herbivore, public Carnivore{
public:		//9.correct use of public, private, protected
	Omnivore(string);
	Omnivore(const Omnivore &originalOmnivore);
	void display();
private:	//9.correct use of public, private, protected
	int number();
};

#endif
