#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal(string n, int a, bool hungry) : name(n), age(a), isHungry(hungry) {}
    ~Animal() {}
    void display();
    void feed();

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    bool getIsHungry()
    {
        return isHungry;
    }

    string Hunger()
    {
        if(Animal.isHungry == true)
            return "is Hungry";
        else
            return "is Not Hungry";
    }

};



#endif
