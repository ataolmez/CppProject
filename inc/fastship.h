//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_FASTSHIP_H
#define CPPPROJECT_FASTSHIP_H
#include "../inc/Ship.h"

class fastship:public Ship{
public:
    fastship(int _fuel,int _money,double _health,double _damagemodifier,double _chancemodifier) : Ship(_fuel,_money,_health,_damagemodifier,_chancemodifier) {}

    void DecreaseHealth(int damage) override;
    void DecreaseFuel() override;
    int GetMoney() override;
    double GetHealth() override;
    int GetFuel() const override;
    void changeMoney(int pay) override;
    int GetChance() const override;
    int GetDamage() const override;



private:
protected:


};

#endif //CPPPROJECT_FASTSHIP_H
