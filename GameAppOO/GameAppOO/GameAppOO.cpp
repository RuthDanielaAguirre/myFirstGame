// GameAppOO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Character.h"
#include <string>
using namespace std;

int main()
{
    Character enemy("Warrior", 100, 25);

    Character hero("Hero", 110,30);

    Character boss("Final Boss", 150, 40);

    cout << "Welcome to your favorite Game";


    cout << enemy.getStatus() << endl;
    cout << hero.getStatus() << endl;

    while (enemy.isAlive() && hero.isAlive()) {
        cout << "It is hero time!!! \n";
        int heroDamage = hero.attack();
        enemy.recieveDamage(heroDamage);
        cout << "The enemy received: " << heroDamage << " of Damage.";

        cout << "It is Enemy's turn";
        int enemyDamage = enemy.attack();
        hero.recieveDamage(enemyDamage);
        cout << "Our hero received: " << enemyDamage << " of Damage.";

        cout << enemy.getStatus() << endl;
        cout << hero.getStatus() << endl;    
    }

    if (hero.isAlive()) {
        cout << "You are coming to your end, you are fighting THE BOSS!!";
        cout << boss.getStatus() << endl;

    while(boss.isAlive() && hero.isAlive())

    
    }


 }

