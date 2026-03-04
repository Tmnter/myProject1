#include "Characters.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "--- Testing MainHero Constructors ---" << endl;
    MainHero hero1("Andriy");
    cout << "Hero 1 Name: " << hero1.getName() << endl;
    cout << "-------------------------------------" << endl;
    MainHero hero2("Oleg", 150);
    cout << "Hero 2 Name: " << hero2.getName() << " | HP: " << hero2.getHealth() << endl;
    cout << "-------------------------------------" << endl;
    MainHero hero3("Master", 999, 100);
    cout << "Hero 3 Name: " << hero3.getName() << " | XP: " << hero3.getXp() << endl;
    cout << "-------------------------------------" << endl;
    MainHero hero4;
    cout << "Hero 4 (Default): " << hero4.getName() << endl;
    cout << "-------------------------------------" << endl;

    cout << "\n--- Testing Other Classes ---" << endl;

    Villager npc1;
    Enemy boss1;

    cout << "\n--- Destructors will be called now ---" << endl;

    return 0;
}
