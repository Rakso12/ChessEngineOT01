#include <iostream>
#pragma once

class Piece
{
public:
	// Pieces values
	const int	None    = 0;
	const int	Pawn    = 1;
	const int	Knight  = 2;
	const int	Bishop  = 3;
	const int	King	= 4;
	const int	Rook    = 5;
	const int	Queen   = 6;
	
	// Pieces Colour
	const int	NoneColour	= 0;
	const int	White		= 8;
	const int	Black		= 16;

	int	PieceType = 0;
	int	PieceColour = 0;

	Piece(int pType, int pColour);
	~Piece();

	void printType();
};
