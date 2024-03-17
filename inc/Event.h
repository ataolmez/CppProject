//
// Created by ARDA on 14.03.2024.
//

#ifndef CPPPROJECT_EVENT_H
#define CPPPROJECT_EVENT_H

#include<memory>
#include "Ship.h"
#include <iostream>

class Event {
protected:
    const int damage;
    const int escapeChance;
public:
    Event(const int damage_, const int escapeChance_):damage{damage_},escapeChance{escapeChance_} {}
    virtual ~Event(){};
    virtual void eventEncounter(std::unique_ptr<Ship>& ship) = 0;
    virtual int generateRandomNumber() = 0;


};




#endif //CPPPROJECT_EVENT_H
