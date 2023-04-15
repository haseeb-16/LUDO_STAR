#include "ludo.h"
#include"player.h"
#include"piece.h"
#include"Header.h"
#include<iostream>
using namespace std;

void change_turn(int& turn, int num)
{
	turn = turn + 1;
	turn = turn % num;
}
ludo::ludo()
{
	this->plr = nullptr;
}

void ludo::play()
{
	int turn=0;
	int num;
	cout << "\nEnter number of players(2,3,4): ";
	cin >> num;
	player* pls;
	pls = new player[num];
	for (int i = 0; i < num; i++)
	{
		string na;
		cout << "\nEnter player name: ";
		cin >> na;
		if (i == 0)
			pls[i].assi(na, RED);
		if (i == 1)
			pls[i].assi(na, BLUE);
		if (i == 2)
			pls[i].assi(na, YELLOW);
		if (i == 3)
			pls[i].assi(na, GREEN);

	}



}
