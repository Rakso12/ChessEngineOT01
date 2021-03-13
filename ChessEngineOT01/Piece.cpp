#include "Piece.h"

Piece::Piece(int pType, int pColour)
{
	if (pColour == 0)
		PieceColour = White;
	else if (pColour == 1)
		PieceColour = Black;
	else if (pColour == 2)
		PieceColour = NoneColour;
	else
		std::cout << "Wrong piece colour add in Constructor";


	if (pType == 0)
		PieceType = None;
	else if (pType == 1)
		PieceType = Pawn;
	else if (pType == 2)
		PieceType = Knight;
	else if (pType == 3)
		PieceType = Bishop;
	else if (pType == 4)
		PieceType = King;
	else if (pType == 5)
		PieceType = Rook;
	else if (pType == 6)
		PieceType = Queen;
	else
		std::cout << "Wrong piece type add in Constructor";
}

Piece::~Piece()
{

}

void Piece::printType()
{
	std::cout << this->PieceType;
}
