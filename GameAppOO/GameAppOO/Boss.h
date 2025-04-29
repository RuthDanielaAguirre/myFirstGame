#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class Boss : public Character{
public:
	Boss(string name, int hp, int damage);
	int attack();
};

