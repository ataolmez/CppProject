//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include "../inc/normalship.h"



void normalship::DecreaseHealth(int damage) {
    health = health - damage*damagemodifier;
    if (health < 0) {
        health = 0;
    }
}
void normalship::DecreaseFuel() {
    fuel = fuel - 33;
}
double normalship::GetHealth() {
    return health;
}
int normalship::GetFuel() const {
    return fuel;
}
int normalship::GetMoney()  {
    return money;
}
void normalship::changeMoney(int pay) {
    money = money + pay;
}
double normalship::GetChance() const {
    return chancemodifier;
}
double normalship::GetDamage() const {
    return damagemodifier;
}
