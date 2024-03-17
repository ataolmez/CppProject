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

int Pirate::chooseaction(){
    int sec;
    std::cout << " Pirate attack! Choose action(0 run 1 fight 2 negotiate)" << "\n";
    std::cin >> sec;
    return sec;
}

void Pirate::eventEncounter(std::unique_ptr<Ship> ship) {
    int secenek;

    for (int i = 0; i < 3; ++i) {
        int randomNumber_ = generateRandomNumber();
        randomNumberVector.push_back(randomNumber);
        secenek = chooseaction();
        while (escapeParameter == 0) {
            switch (secenek) {
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
                        std::cout << "Arkadan vurdu!" << "\n";
                        escapeParameter = 1;
                    } else {
                        std::cout << "You have won the fight!" << "\n";
                        escapeParameter = 1;
                    }
                    break;

                case 2:
                    if (randomNumberVector[2] % 3 == 0) {
                        ship->changeMoney(10);
                        std::cout << "10 tele" << "\n";
                        escapeParameter = 1;
                    } else if (randomNumberVector[2] % 3 == 1) {
                        ship->changeMoney(20);
                        std::cout << "20 tele" << "\n";
                        escapeParameter = 1;
                    } else if (randomNumberVector[2] % 3 == 2) {
                        ship->changeMoney(30);
                        std::cout << "30 tele" << "\n";
                        escapeParameter = 1;
                    }
                    break;
                default:
                    std::cout << "error" << "\n";
            }
        }
    }


}