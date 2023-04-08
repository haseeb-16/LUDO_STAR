#include "ludo.h"
#include"player.h"
#include<iostream>
using namespace std;


void ludo::play()
{
	int num;
	cout << "\nEnter number of players: ";
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
