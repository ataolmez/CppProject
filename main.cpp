//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include "inc/Ship.h"
#include "inc/fastship.h"
#include "inc/normalship.h"
#include "inc/strongship.h"
#include <memory>
#include "inc/Asteroids.h"


int main(){
    std::unique_ptr<Ship> ship = std::make_unique<normalship>(100,100,100,1,1); // Example: creating a NormalShip
    Asteroids asteroidler = Asteroids(10, 50);
    asteroidler.eventEncounter(std::move(ship));

    return 0;
}
