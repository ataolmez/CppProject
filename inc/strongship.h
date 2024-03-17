//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_STRONGSHIP_H
#define CPPPROJECT_STRONGSHIP_H
#include "../inc/Ship.h"

class strongship :public Ship{
public:
    strongship(int _fuel,int _money,double _health,double _damagemodifier, double _chancemodifier) : Ship(_fuel,_money,_health,_damagemodifier,_chancemodifier) {}
    ~strongship() override{};
    strongship(const strongship&) = delete;


    void DecreaseHealth(int damage);
    void DecreaseFuel();
    double GetHealth() override;
    int GetFuel() override;
    double GetChance() const override;
    double GetDamage() const override;
    int GetMoney() override;
    void changeMoney(int pay) override;
private:
protected:

};

#endif //CPPPROJECT_STRONGSHIP_H
