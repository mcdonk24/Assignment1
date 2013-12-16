#include "Herbivore.h"
#include <iostream>

Herbivore::Herbivore(string name, int sleep):Animal(name, sleep){}

string Herbivore::eatplants(){
	return "plants";
}

int Herbivore::number(){
	return setNumber;
}

//2.Overriding using inheritance
void Herbivore::display(){
	Animal::display();
	cout<<" and the animal eats "<<eatplants()<<".\n"<<endl;

}

int Herbivore::setNumber=10;
