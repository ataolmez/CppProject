//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include "../inc/strongship.h"


void strongship::DecreaseHealth(int damage) {
    health = health - damage*damagemodifier;
    if (health < 0) {
        health = 0;
    }
}

void strongship::DecreaseFuel() {
    fuel = fuel - 33;
}
double strongship::GetHealth() {
    return health;
}
int strongship::GetFuel()  {
    return fuel;
}
int strongship::GetMoney() {
    return money;
}
void strongship::changeMoney(int pay) {
    money = money + pay;
}
double strongship::GetChance() const {
    return chancemodifier;
}
double strongship::GetDamage() const {
    return damagemodifier;
}