#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string animalname):
		name(animalname){
}
//1.overloading
Animal::Animal(string animalname, int sleeping):
		name(animalname), sleep(sleeping){
}

 void Animal::display(){
	cout<<"There are "<<number()<<" animals of the type "<<name<<", "<< sleep << " of which are sleeping";
}
