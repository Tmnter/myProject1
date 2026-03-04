#include "Characters1.h"
#include <iostream>
#include <string>

using namespace std;
MainHero::MainHero(string nameInp, int healthInp, int XPInp)
    : name{nameInp}, health{healthInp}, XP{xpInp}
{
    cout << "MainHero fully initialized: " << name << " (HP: " << health << ", XP: " << XP << ")" << endl;
}
MainHero::MainHero(string nameInp)
    : MainHero(nameInp, 100, 0)
{
    cout << "Delegated: Constructor with 1 argument called" << endl;
}
MainHero::MainHero(string nameInp, int healthInp)
    : MainHero(nameInp, healthInp, 0)
{
    cout << "Delegated: Constructor with 2 arguments called" << endl;
}

MainHero::MainHero()
    : MainHero("Hero", 100, 0)
{
    cout << "Delegated: Default constructor called" << endl;
}

MainHero::~MainHero() {
    cout << "Object MainHero (" << name << ") deleted" << endl;
}

Villager::Villager() {
    cout << "Object Villager created" << endl;
}
Villager::~Villager() {
    cout << "Object Villager deleted" << endl;
}

Enemy::Enemy() {
    cout << "Object Enemy created" << endl;
}
Enemy::~Enemy() {
    cout << "Object Enemy deleted" << endl;
}
