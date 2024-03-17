//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_ABONDONEDPLANET_H
#define CPPPROJECT_ABONDONEDPLANET_H

#include <iostream>
#include "Event.h"


class AbondonedPlanet: public Event {
public:
    AbondonedPlanet();
    AbondonedPlanet(const int damage_, const int escapeChance_):Event(damage_,escapeChance_){}
    ~AbondonedPlanet() override{};

    void eventEncounter(std::unique_ptr<Ship> &ship) override;

    int generateRandomNumber() override;



};

#endif //CPPPROJECT_ABONDONEDPLANET_H
