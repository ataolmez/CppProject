#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>
#include "../inc/Asteroids.h"
#include <random>

//
// Created by ARDA on 14.03.2024.
//


int Asteroids::generateRandomNumber() {
    static std::random_device rd;
    static std::mt19937 rng(rd());
    std::uniform_int_distribution<int> distribution(1, 100);
    return distribution(rng);
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
            std::cout<< "Current Health:"<< ship->GetHealth() <<"\n";
        }
    }
}