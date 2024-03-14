//
// Created by ARDA on 14.03.2024.
//

#ifndef CPPPROJECT_ASTEROIDS_H
#define CPPPROJECT_ASTEROIDS_H

#include "Event.h"
#include "Ship.h"

class Asteroids : public Event {
public:
    Asteroids();

    void eventEncounter(std::unique_ptr<Ship> ship) override;

    int generateRandomNumber() override;

    int randomNumber{};
};





#endif //CPPPROJECT_ASTEROIDS_H
