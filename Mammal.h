#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : Animal {
    private:
        string furColor;
    public:
        Mammal(string n, int a, bool hungry, string color) : Animal(name, age, isHungry), furColor(color) {}
        ~Mammal() {}
};





#endif
