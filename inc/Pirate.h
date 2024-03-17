//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_PIRATE_H
#define CPPPROJECT_PIRATE_H
#include "Event.h"
#include "Ship.h"
#include <memory>
#include <iostream>
#include <vector>
class Pirate : public Event {
public:
    Pirate();
    Pirate(const int damage_, const int escapeChance_):Event(damage_,escapeChance_){}
    ~Pirate() override{};

    void eventEncounter(std::unique_ptr<Ship>& ship) override;
    int generateRandomNumber() override;
    int randomNumber;
    int escapeParameter = 0;
    int chooseaction();
    static int choose;
    std::vector<int> randomNumberVector;;


};
#endif //CPPPROJECT_PIRATE_H
