#include "Carnivore.h"
#include <iostream>

Carnivore::Carnivore(string name, int sleep):Animal(name, sleep){}

string Carnivore::eatmeat(){
	return "meat";
}

int Carnivore::number(){
	int y =static_cast<int>(x);//12.static casting
	return y;
}

void Carnivore::display(){
	Animal::display();
	cout<<" and the animal eats "<<eatmeat()<<".\n"<<endl;
}

//8.Working destructor
Carnivore::~Carnivore(){
	 cout<<"Carnivore has been destroyed"<<endl;
 }

//10.Overloaded operators
Carnivore Carnivore::operator +(Carnivore a){
	if(name == a.name){
	return Carnivore(name, sleep + a.sleep);
	}
	else{
		cout<<"Cannot add different animals"<<endl;

	}
}
//5.friend function
void sleepingAnimals(Carnivore &b)
  {
    cout<<"There are "<< b.sleep << " animals sleeping.\n";    //allowed!
  }

