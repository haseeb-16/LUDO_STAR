#include "piece.h"
Piece::Piece()
{
	r = 0;
	c = 0;
}
Piece::Piece(int _r, int _c, color _clr)
{
	r = _r;
	c = _c;
	clr = _clr;
}