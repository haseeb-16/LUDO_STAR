#include "Dice.h"
#include"Header.h"
#include<time.h>

Dice::Dice() {
	this->value = 0;
}
void Dice::getvalue() {
	srand(time(0));
	this->value = rand();
    this->value % (5)+1;
}
