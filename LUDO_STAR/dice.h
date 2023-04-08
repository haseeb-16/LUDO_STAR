#pragma once
#include"ludo.h"

class Dice:public Ludo
{
	int value;
public:
	Dice();
	int getvalue();
};
