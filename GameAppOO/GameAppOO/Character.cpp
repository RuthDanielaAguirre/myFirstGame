#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character()
{
	name = "";
	hp = 0;
	damage = 0;
}

Character::Character(string iname, int ihp, int idamage)
{
	name = iname;
	hp = ihp;
	damage = idamage;
}

string Character::getName()
{
	return name;
}

int Character::getHp()
{
	return hp;
}

int Character::getDamage()
{
	return damage;
}

void Character::setName(string iName)
{
	name = iName;
}


void Character::setHp(int iHp)
{
	hp = iHp;

}

void Character::setDamage(int iDamage)
{
	damage = iDamage;
}

string Character::getStatus()
{
	return ("Character Status: \n Name: " + name + "\n HP: " + to_string(hp) + "\n Golpe: " + to_string(damage));
}

int Character::attack()
{
	return 0;

	
}

void Character:: recieveDamage(int iDamage) {
	hp -= iDamage;
	if (hp < 0) {
		hp = 0;
	}

}
bool Character:: isAlive() {
	return hp > 0;
	
}
