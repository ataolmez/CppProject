//
// Created by ATA on 14.03.2024.
//
#include "../inc/Pirate.h"
#include "../inc/Ship.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int Pirate::generateRandomNumber() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return rand() % 100 + 1;
}

void Pirate::eventEncounter(std::unique_ptr<Ship> ship) {
    std::vector<int> randomNumberVector;
    for (int i = 0; i < 3; ++i) {
        int randomNumber_ = generateRandomNumber();
        randomNumberVector.push_back(randomNumber);
    }

    // Loop until the ship escapes
    int escapeParameter_ = 0;
    while (escapeParameter == 0) {
        int choose;
        std::cin>> choose; // Randomly choose action

        switch (choose) {
            case 0:
                if (ship->GetFuel() == 1) {
                    std::cout << "You don't have enough fuel!" << "\n";
                } else if (randomNumberVector[0] < ship->GetChance() * 50) {
                    std::cout << "Ship Escaped From the Pirates" << "\n";
                    ship->DecreaseFuel();
                    escapeParameter = 1;
                }
                break;

            case 1:
                if (randomNumberVector[1] < 50) {
                    ship->DecreaseHealth(Event::damage);
                } else {
                    std::cout << "You have won the fight!" << "\n";
                }
                break;

            case 2:
                if (randomNumberVector[2] % 3 == 0) {
                    ship->changeMoney(10);
                } else if (randomNumberVector[2] % 3 == 1) {
                    ship->changeMoney(20);
                } else if (randomNumberVector[2] % 3 == 2) {
                    ship->changeMoney(30);
                }
                break;
            default:
                std::cout<<"error"<<"\n";
        }
    }
}