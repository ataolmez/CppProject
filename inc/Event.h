//
// Created by ARDA on 14.03.2024.
//

#ifndef CPPPROJECT_EVENT_H
#define CPPPROJECT_EVENT_H

#include<memory>
#include "Ship.h"

class Event {
protected:
    const int damage;
    const int escapeChance{50};
public:
    Event();
    virtual ~Event();
    virtual void eventEncounter(std::unique_ptr<Ship> ship) = 0;
    virtual int generateRandomNumber() = 0;


};








#endif //CPPPROJECT_EVENT_H
