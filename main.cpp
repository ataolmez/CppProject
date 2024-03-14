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
#include "inc/AbondonedPlanet.h"
#include "inc/Pirate.h"


int main(){
    std::unique_ptr<Ship> ship = std::make_unique<normalship>(100,100,100,1,1); // Example: creating a NormalShip
    Pirate savas = Pirate(10, 50);
    savas.eventEncounter(std::move(ship));

    return 0;
}
