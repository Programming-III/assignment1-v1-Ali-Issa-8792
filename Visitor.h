#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string nme, int tickets) : visitorName(nme), ticketsBought(tickets) {}
    ~Visitor() {}
    string getVisName() {
        return visitorName;
    }

    void displayInfo() {
        cout << "Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }

};







#endif
