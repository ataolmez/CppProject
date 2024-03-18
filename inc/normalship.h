//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_NORMALSHIP_H
#define CPPPROJECT_NORMALSHIP_H
#include "Ship.h"

class normalship:public Ship {

public:

    normalship(int _fuel, int _money, double _health, double _damagemodifier, double _chancemodifier) : Ship(_fuel,_money,_health,_damagemodifier,_chancemodifier) {

    }
    ~normalship() override{};
    normalship(const normalship&) = delete;


    void DecreaseHealth(int damage) override;
    void DecreaseFuel() override;
    void changeMoney(int pay) override;
    double GetHealth() override;
    int GetFuel() override;
    double GetChance() const override;
    double GetDamage() const override;
    int GetMoney() override;

private:
protected:
};

#endif //CPPPROJECT_NORMALSHIP_H
