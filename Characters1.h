#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>
#include <iostream>

using namespace std;

class MainHero {
private:
    string name;
    int health;
    int XP;

public:
    // Конструктор з 3 аргументами (Основний)
    MainHero(string nameInp, int healthInp, int xpInp);

    // Перевантажені конструктори для делегування
    MainHero();                          // 0 аргументів
    MainHero(string nameInp);            // 1 аргумент
    MainHero(string nameInp, int healthInp); // 2 аргументи

    ~MainHero(); // Деструктор

    // Геттери та сеттери
    string getName() { return name; }
    int getHealth() { return health; }
    void setHealth(int h) { if(h >= 0) health = h; }
};

class Villager {
private:
    string name;
public:
    Villager();
    ~Villager();
};

class Enemy {
private:
    string type;
public:
    Enemy();
    ~Enemy();
};

#endif
