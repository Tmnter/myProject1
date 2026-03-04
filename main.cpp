#include "Characters.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Встановлюємо кодування для коректного виводу (якщо потрібно)
    // system("chcp 65001");

    cout << "--- Testing MainHero Constructors ---" << endl;

    // 1. Виклик конструктора з 1 аргументом (делегує в основний)
    MainHero hero1("Andriy");
    cout << "Hero 1 Name: " << hero1.getName() << endl;
    cout << "-------------------------------------" << endl;

    // 2. Виклик конструктора з 2 аргументами (делегує в основний)
    MainHero hero2("Oleg", 150);
    cout << "Hero 2 Name: " << hero2.getName() << " | HP: " << hero2.getHealth() << endl;
    cout << "-------------------------------------" << endl;

    // 3. Виклик основного конструктора з 3 аргументами
    MainHero hero3("Admin_Master", 999, 100);
    cout << "Hero 3 Name: " << hero3.getName() << " | XP: " << hero3.getXp() << endl;
    cout << "-------------------------------------" << endl;

    // 4. Виклик конструктора без аргументів (делегує в основний)
    MainHero hero4;
    cout << "Hero 4 (Default): " << hero4.getName() << endl;
    cout << "-------------------------------------" << endl;

    cout << "\n--- Testing Other Classes ---" << endl;

    Villager npc1;
    Enemy boss1;

    cout << "\n--- Destructors will be called now ---" << endl;

    return 0;
}
