#pragma once
#include <iostream>
using namespace std;

class Character
{
	//atributos

private:
	string name;
	int hp;
	int damage;

	//prototipos
public:
	//constructor
	Character();
	Character(string iname, int ihp, int idamage);


	//GETTERS

	string getName();
	int getHp();
	int getDamage();

	//SETTERS
	void setName(string iName);
	void setHp(int iHp);
	void setDamage(int iDamage);

	//METODOS
	string getStatus();
	int attack();
	void recieveDamage(int iDamage);
	bool isAlive();

};
