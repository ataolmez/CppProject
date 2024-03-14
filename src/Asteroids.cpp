#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../inc/Asteroids.h"

//
// Created by ARDA on 14.03.2024.
//

Asteroids::Asteroids() {
    std::cout << "Asteroids constructor called" << "\n";
}

int Asteroids::generateRandomNumber() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return rand() % 100 + 1;
}

void Asteroids::eventEncounter(std::unique_ptr<Ship> ship){
    int i;

    for(i=1;i<4;i++) {
        randomNumber = generateRandomNumber();
        if (randomNumber < ship->GetChance() * Event::escapeChance)
            std::cout << "Ship Escaped From the" << i << ".Wave of Asteroids" << "\n";
        else {
            ship->DecreaseHealth(Event::damage);
            std::cout << "Uzay Anlik: Asteroid Mahallesinde gazaaaa!!!" << "\n";
            std::cout << "Health is decreased" << "\n";
        }
    }
}