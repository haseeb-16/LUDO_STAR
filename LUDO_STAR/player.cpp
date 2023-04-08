
#include "player.h"
player::player()
{
	this->name = nullptr;
	this->c = BLUE;
}
player::player(string name, color c)
{
	this->name = name;
	this->c = c;
}
void player::assi(string name, color c)
{
	this->name = name;
	this->c = c;
}
