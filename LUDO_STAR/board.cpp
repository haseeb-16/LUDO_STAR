#include "board.h"
board::board()
{
	ps = new Piece[16];
	this->size = 16;
	ps[0] = Piece(3, 2, GREEN);
	ps[1] = Piece(3, 4, GREEN);
	ps[2] = Piece(5, 4, GREEN);
	ps[3] = Piece(5, 2, GREEN);
	ps[4] = Piece(16, 16, RED);
	ps[5] = Piece(16, 18, RED);
	ps[6] = Piece(18, 16, RED);
	ps[7] = Piece(18, 18, RED);
	ps[8] = Piece(23, 23, BLUE);
	ps[9] = Piece(26, 26, BLUE);
	ps[10] = Piece(23, 26, BLUE);
	ps[11] = Piece(26, 23, BLUE);
	ps[12] = Piece(32, 32, YELLOW);
	ps[13] = Piece(36, 36, YELLOW);
	ps[14] = Piece(32, 36, YELLOW);
	ps[15] = Piece(36, 32, YELLOW);


	
	
}
board::board(int _size)
{
	this->size = _size;
	ps = new Piece[16];
	ps[0] = Piece(3, 2, GREEN);
	ps[1] = Piece(3, 4, GREEN);
	ps[2] = Piece(5, 4, GREEN);
	ps[3] = Piece(5, 2, GREEN);
	ps[4] = Piece(16, 16, RED);
	ps[5] = Piece(16, 18, RED);
	ps[6] = Piece(18, 16, RED);
	ps[7] = Piece(18, 18, RED);
	ps[8] = Piece(23, 23, BLUE);
	ps[9] = Piece(26, 26, BLUE);
	ps[10] = Piece(23, 26, BLUE);
	ps[11] = Piece(26, 23, BLUE);
	ps[12] = Piece(32, 32, YELLOW);
	ps[13] = Piece(36, 36, YELLOW);
	ps[14] = Piece(32, 36, YELLOW);
	ps[15] = Piece(36, 32, YELLOW);
}
void board::drawboard()
{

}
void board::drawpiece()
{

}