#pragma once
#include"Ludo.h"

class Dice:public Ludo
{
	int value;
public:
	Dice();
	int getvalue();
};
