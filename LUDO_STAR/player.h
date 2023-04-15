#pragma once
#include"Header.h"
using namespace std;
class player
{
	string name;
	color clr;
	
public:
	player();
	player(string name, color c);
	void assi(string name, color c);
	color retrn_clr();

};

