#include "dice.h"
#include"Header.h"

using namespace std;

dice::Dice() {
	this->value = 0;
}
int Dice::getvalue() {
	srand(time(0));
	return (this->value % (5)+1);
}
