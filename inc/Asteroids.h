//
// Created by ARDA on 14.03.2024.
//

#ifndef CPPPROJECT_ASTEROIDS_H
#define CPPPROJECT_ASTEROIDS_H

#include "Event.h"
#include "Ship.h"
#include <memory>
#include <iostream>

class Asteroids : public Event {
public:
    Asteroids();
    Asteroids(const int damage_, const int escapeChance_):Event(damage_,escapeChance_){}
    ~Asteroids() override{};

    void eventEncounter(std::unique_ptr<Ship>& ship) override;

    int generateRandomNumber() override;

    int randomNumber{0};
};





#endif //CPPPROJECT_ASTEROIDS_H
