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
    MainHero(string nameInp, int healthInp, int xpInp);

    MainHero();
    MainHero(string nameInp);
    MainHero(string nameInp, int healthInp);

    ~MainHero();

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
