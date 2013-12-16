#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "Omnivore.h"
#include <iostream>
#include <vector>

//16.classTest and structTest used to demonstrate difference between class and struct
class classTest{
	int r;
};

struct structTest{
	int t;
};

//20.Used in the algorithm, for_each, for the vector container
void vectdisplay(Carnivore o)
{
	o.display();
}

int main(){

//5.Friend function
Carnivore sa("Leopard", 3);
sleepingAnimals(sa);

Carnivore a("Lion", 2);
a.display();
Carnivore b("Lion", 4);

//10.overloaded operators
Carnivore g = a + b;
g.display();

//11.operations on pointers to arrays
Carnivore somecarnivores[]={Carnivore("Dragon", 7), Carnivore("Tiger", 0), Carnivore("Jaguar", 4)};
Carnivore *p = &somecarnivores[0];

p->display();
(++p)->display();

Herbivore *c = new Omnivore("Rabbit");
Omnivore *h = dynamic_cast<Omnivore*>(c);	//12.dynamic casting

delete h;//14.correct use of delete

//19.use of a vector container
vector<Carnivore> vect;
vect.push_back(Carnivore("Liger", 2));
vect.push_back(Carnivore("Eagle", 0));
vect.push_back(Carnivore("Vulture", 2));

//20.use of an algorithm on container
for_each(vect.begin(), vect.end(), vectdisplay);

Herbivore d("Panda", 3);
Omnivore e("Human");

//7.modified copy constructor
Omnivore f(e);

d.display();
e.display();
f.display();

Carnivore *i = new Carnivore("Dinosaur", 4);	//14.correct use of new
Herbivore *j = reinterpret_cast<Herbivore*>(i);//12.reinterpret casting

j->display();

//16.demonstrates the difference between a class and a struct
classTest test1;
structTest test2;

//test1.r = 42; will not work because class is private
test2.t = 42;



}
