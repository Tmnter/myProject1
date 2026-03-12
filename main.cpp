#include "Characters1.h"
#include "Characters2.h"
#include "Characters3.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "--- Testing MainHero Constructors ---" << endl;
    MainHero hero1("Olega", 150);
    cout << "Hero 1 Name: " << hero1.getName() << endl;
    MainHero hero2("Oleg", 150);
    cout << "Hero 2 Name: " << hero2.getName() << " | HP: " << hero2.getHealth() << endl;
    MainHero hero3("Master", 999, 100);
    cout << "Hero 3 Name: " << hero3.getName() << " | XP: " << hero3.getXP() << endl;

    Villager npc1;
    Enemy boss1;

    cout << "\n--- Destructors will be called now ---" << endl;

    return 0;
}
