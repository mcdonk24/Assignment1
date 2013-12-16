#include "Omnivore.h"
#include <iostream>

//3.demonstrates multiple inheritance
Omnivore::Omnivore(string name):Animal(name, sleep), Herbivore(name, sleep), Carnivore(name, sleep){}

int Omnivore::number(){
	return 7;
}

void Omnivore::display(){
	cout<<"This animal is a "<<name<<" and it eats "<<eatplants()<<" and "<<eatmeat()<<".\n"<<endl;

}
//7.modified copy constructor
Omnivore::Omnivore(const Omnivore &originalOmnivore):Animal(name, sleep), Herbivore(name, sleep), Carnivore(name, sleep){
	name = "Bear";
}



