//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_NORMALSHIP_H
#define CPPPROJECT_NORMALSHIP_H
#include "../inc/ship.h"

class normalship:public Ship {

public:

    normalship(int _fuel, int _money, double _health, double _damagemodifier, double _chancemodifier) : Ship(_fuel,_money,_health,_damagemodifier,_chancemodifier) {
        std::cout<<"normalship called"<<"\n";
    }
    ~normalship() override{std::cout<<"normalship destructor called"<<"\n";};

    void DecreaseHealth(int damage) override;
    void DecreaseFuel() override;
    void changeMoney(int pay) override;
    double GetHealth() override;
    int GetFuel() const override;
    double GetChance() const override;
    double GetDamage() const override;
    int GetMoney() override;

private:
protected:
};

#endif //CPPPROJECT_NORMALSHIP_H
