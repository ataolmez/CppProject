//
// Created by ATA on 14.03.2024.
//
#include "../inc/Pirate.h"
#include "../inc/Ship.h"
#include "../inc/AbondonedPlanet.h"
#include "../inc/Event.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<memory>


int AbondonedPlanet::generateRandomNumber() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return rand() % 100 + 1;
}

void AbondonedPlanet::eventEncounter(std::unique_ptr<Ship> &ship){
    int randomNumber = generateRandomNumber();
    if (randomNumber < ship->GetChance() * Event::escapeChance) {
        std::cout << "You have found 10 gold!" << "\n";
        ship->changeMoney(10);
    }
    else{
        std::cout <<"Ambush Pirate Attack!"<<"\n";
        std::unique_ptr<Pirate> attacker(new Pirate(10,50));
        attacker->eventEncounter(ship);

    }
}