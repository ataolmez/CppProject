//
// Created by ATA on 14.03.2024.
//

#ifndef CPPPROJECT_SHIP_H
#define CPPPROJECT_SHIP_H
#include <iostream>
class Ship {
public:
    Ship() = default;

    Ship(int _fuel, int _money, double _health, double _damagemodifier, double _chancemodifier) : fuel{_fuel},money{_money},health{_health},damagemodifier{_damagemodifier},chancemodifier{_chancemodifier} {}
    virtual ~Ship()= default;
    Ship(const Ship&) = delete;

    virtual void DecreaseHealth(int damage) = 0;

    virtual void DecreaseFuel() = 0;

    virtual double GetHealth() = 0;

    virtual int GetFuel() = 0;

    virtual double GetChance() const = 0;

    virtual double GetDamage() const = 0;

    virtual void changeMoney(int pay) = 0;

    virtual int GetMoney() = 0;

private:
protected:

    int fuel;
    int money;
    double health;
    double damagemodifier;
    double chancemodifier;
};




#endif //CPPPROJECT_SHIP_H
