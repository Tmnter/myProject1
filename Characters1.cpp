#include "Characters1.h"
#include <iostream>
#include <string>

using namespace std;

// 1. Конструктор з ТРЬОМА аргументами (Основний)
// Він виконує реальну роботу з ініціалізації через список ініціалізації
MainHero::MainHero(string nameInp, int healthInp, int XPInp)
    : name{nameInp}, health{healthInp}, XP{xpInp}
{
    cout << "MainHero fully initialized: " << name << " (HP: " << health << ", XP: " << XP << ")" << endl;
}

// 2. Конструктор з ОДНИМ аргументом
// ДЕЛЕГУЄ роботу основному конструктору, підставляючи значення за замовчуванням для HP та XP
MainHero::MainHero(string nameInp)
    : MainHero(nameInp, 100, 0) // Виклик конструктора з 3-ма параметрами
{
    cout << "Delegated: Constructor with 1 argument called" << endl;
}

// 3. Конструктор з ДВОМА аргументами
// ДЕЛЕГУЄ роботу основному конструктору, підставляючи 0 для XP
MainHero::MainHero(string nameInp, int healthInp)
    : MainHero(nameInp, healthInp, 0) // Виклик конструктора з 3-ма параметрами
{
    cout << "Delegated: Constructor with 2 arguments called" << endl;
}

// Конструктор без аргументів (якщо потрібен за завданням)
MainHero::MainHero()
    : MainHero("Hero", 100, 0)
{
    cout << "Delegated: Default constructor called" << endl;
}

// Деструктор
MainHero::~MainHero() {
    cout << "Object MainHero (" << name << ") deleted" << endl;
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
