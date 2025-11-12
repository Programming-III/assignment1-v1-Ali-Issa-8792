#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
    private:
        Animal* animals[];
        int capacity;
        int currentCount;
    public:
        Enclosure(int cap, int curr){
            Animal* animals[];
            capacity =  cap;
            currentCount =  curr;
        }
        ~Enclosure() {}

        void addAnimal(Animal* a) {
            animals.add(a);
            currentCount++;
        }
        void displayAnimals() {
            for(int i = 0; i < currentCount ;  i++)
            {
                cout << animals[i].getName(); << " Age: " << animals[i].getAge(); << animals[i].Hunger(); << endl;
            }
        }

};








#endif
