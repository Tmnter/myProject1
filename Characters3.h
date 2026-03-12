#ifndef CHARACTERS3_H
#define CHARACTERS3_H
#include <string>
#include <iostream>

using namespace std;

class Enemy {
private:
    string type;
    int damage;
public:
    Enemy(string type = "Goblin", int damage = 5);
    ~Enemy();
};
#endif
