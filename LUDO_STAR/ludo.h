#pragma once
#include"board.h"
#include"dice.h"
#include"player.h"
class ludo
{
	board b;
	Dice d;
	player* plr;
public:
	ludo();
	void play();
};

