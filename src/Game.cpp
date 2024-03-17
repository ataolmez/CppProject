//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include <memory>
#include <vector>
#include <ctime>
#include "../inc/Game.h"
#include "../inc/ship.h"
#include "../inc/normalship.h"
#include "../inc/strongship.h"
#include "../inc/fastship.h"
#include "../inc/event.h"
#include "../inc/Pirate.h"
#include "../inc/Asteroids.h"
#include "../inc/AbondonedPlanet.h"


void Game::begin() {
    Game::chooseship();

    switch (shipSelection) {
        case 1:
            while (!end(normalshipInstance)) {
                RandomEvent(std::move(normalshipInstance));
                count++;
                std::cout<<count<<"\n";

            }
            break;
        case 2:
            while (!end(strongshipInstance)) {
                RandomEvent(std::move(strongshipInstance));
                count++;


            }
            break;
        case 3:
            while (!end(fastshipInstance)) {
                RandomEvent(std::move(fastshipInstance));
                count++;


            }
            break;
        default:
            std::cout << "Invalid selection" << "\n";
    }



}

bool Game::end(std::unique_ptr<Ship>& shipInstance) const {

    return (count == 5 || shipInstance->GetFuel() <= 0 || shipInstance->GetHealth() <= 0);
}

void Game::chooseship() {
    int number;
    std::cout << "Choose a ship" << "\n";
    std::cin >> number;
    switch (number) {
        case 1:
            normalshipInstance = std::make_unique<normalship>(100, 0, 100, 1, 1);
            shipSelection = number;
            break;
        case 2:
            strongshipInstance = std::make_unique<strongship>(100, 0, 100, 0.5, 0.5);
            shipSelection = number;
            break;
        case 3:
            fastshipInstance = std::make_unique<fastship>(100, 0, 100, 1.5, 1.5);
            shipSelection = number;
            break;
        default:
            std::cout << "Invalid selection" << "\n";
    }
}


void Game::RandomEvent(std::unique_ptr<Ship>shipInstance) {
    std::vector<std::unique_ptr<Event>> eventVector;
    eventVector.push_back(std::make_unique<Pirate>(10,50));
    eventVector.push_back(std::make_unique<Asteroids>(10,50));
    eventVector.push_back(std::make_unique<AbondonedPlanet>(0,50));

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int randomIndex = std::rand() % eventVector.size();

    Event* randomEvent = eventVector[randomIndex].get();
    randomEvent->eventEncounter(shipInstance);
    if (end(shipInstance)) {
        std::cout<< (shipInstance->GetFuel()*5) + (shipInstance->GetHealth()*10)+(shipInstance->GetMoney()*10)<<"\n";

    }
}