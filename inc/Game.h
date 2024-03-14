//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_GAME_H
#define CPPPROJECT_GAME_H
#include <iostream>
#include <memory>
#include "../inc/ship.h"
#include "../inc/normalship.h"
#include "../inc/strongship.h"
#include "../inc/fastship.h"


class Game{
public:
    Game(){std::cout<<"begin"<<"\n";};
    void begin();
    bool end( std::unique_ptr<Ship>& shipInstance) const;

    void chooseship();
    void RandomEvent(std::unique_ptr<Ship> shipInstance);
private:
    std::unique_ptr<Ship> normalshipInstance;
    std::unique_ptr<Ship> strongshipInstance;
    std::unique_ptr<Ship> fastshipInstance;
    int count{};
    int shipSelection{0};

};

#endif //CPPPROJECT_GAME_H
