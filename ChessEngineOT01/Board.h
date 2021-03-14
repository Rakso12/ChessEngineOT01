#include "Piece.h"
#include "Move.h"
#pragma once

class Board
{
public:
	Piece* Square[8][8];

	Board();
	~Board();

	void printBoard();
};
