#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main(){

    Enclosure enclosure(5, 0);
    Animal* Lion = new Mammal("Lion", 2, true, "Orange");
    Animal* Parrot = new Bird("Parrot", 2, false, 10.1);
    Animal* Snake =  new Reptile("Snake", 3, true ,true);
    Visitor visitor("Sarah Ali", 3);


    displayAnimals();
    vistor.displayInfo();
    return 0;

}
