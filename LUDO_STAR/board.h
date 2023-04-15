#pragma once
#include"piece.h"
#include"Header.h"
class board
{
	int size;
	Piece* ps;
public:
	board();
	board(int _size);
	void drawboard();
	void drawpiece();



};

