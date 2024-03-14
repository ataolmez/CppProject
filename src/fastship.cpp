//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include "../inc/fastship.h"



void fastship::DecreaseHealth(int damage) {
    health = health - damage*damagemodifier;
    if (health < 0) {
        health = 0;
    }
}

void fastship::DecreaseFuel() {
    fuel = fuel - 33;
}
double fastship::GetHealth() {
    return health;
}
int fastship::GetFuel() const {
    return fuel;
}
int fastship::GetMoney() {
    return money;
}
void fastship::changeMoney(int pay) {
    money = money + pay;
}
double fastship::GetChance() const {
    return chancemodifier;
}
double fastship::GetDamage() const {
    return damagemodifier;
}

