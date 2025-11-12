#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 

class Bird : Animal {
    private:
        float wingSpan;
    public:
        Bird(string n, int a, bool hungry, float span) : Animal(name, age, isHungry), wingSpan(span) {}
        ~Bird() {}
};





#endif
