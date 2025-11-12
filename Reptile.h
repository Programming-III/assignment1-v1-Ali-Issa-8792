#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : Animal {
    private:
        bool isVenomous;
    public:
        Reptile(string n, int a, bool hungry, bool venom) : Animal(name, age, isHungry), isVenomous(venom) {}
        ~Reptile() {}
        bool getVenom();

};







#endif
