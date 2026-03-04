#include "Characters.h"
#include <iostream>
#include <string>

using namespace std;

// 1. Основний конструктор (той, що з параметрами за замовчуванням у .h)
MainHero::MainHero(string nameInp, int healthInp, int xpInp)
    : name{nameInp}, health{healthInp}, XP{xpInp}
{
    cout << "MainHero fully initialized: " << name << endl;
}

// 2. Делегування: викликаємо основний конструктор через ":"
MainHero::MainHero()
    : MainHero{"None", 0, 0}
{
    cout << "Object MainHero created via delegation" << endl;
}

MainHero::MainHero(string nameInp)
    : MainHero{nameInp, 0, 0}
{
}

MainHero::MainHero(string nameInp, int healthInp)
    : MainHero{nameInp, healthInp, 0}
{
}

MainHero::~MainHero() {
    cout << "Object MainHero deleted" << endl;
}

// --- Villager ---
Villager::Villager() {
    cout << "Object Villager created" << endl;
}

Villager::~Villager() {
    cout << "Object Villager deleted" << endl;
}

// --- Enemy ---
Enemy::Enemy() {
    cout << "Object Enemy created" << endl;
}

Enemy::~Enemy() {
    cout << "Object Enemy deleted" << endl;
}
