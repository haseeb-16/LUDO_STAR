
#include "player.h"
player::player()
{
	this->name = nullptr;
	this->clr = BLUE;
}
player::player(string name, color c)
{
	this->name = name;
	this->clr = c;
}
void player::assi(string Name, color clr)
{
	this->name = Name;
	this->clr = clr;
}
color player::retrn_clr()
{
	return clr;
}

