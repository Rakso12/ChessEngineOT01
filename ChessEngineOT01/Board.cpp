#include "Board.h"

Board::Board()
{
	Piece* Square[8][8];
	Square[0][0] = new Piece(5, 1);
	Square[0][1] = new Piece(2, 1);
	Square[0][2] = new Piece(3, 1);
	Square[0][3] = new Piece(6, 1);
	Square[0][4] = new Piece(4, 1);
	Square[0][5] = new Piece(3, 1);
	Square[0][6] = new Piece(2, 1);
	Square[0][7] = new Piece(5, 1);

	Square[1][0] = new Piece(1, 1);
	Square[1][1] = new Piece(1, 1);
	Square[1][2] = new Piece(1, 1);
	Square[1][3] = new Piece(1, 1);
	Square[1][4] = new Piece(1, 1);
	Square[1][5] = new Piece(1, 1);
	Square[1][6] = new Piece(1, 1);
	Square[1][7] = new Piece(1, 1);

	Square[6][0] = new Piece(1, 0);
	Square[6][1] = new Piece(1, 0);
	Square[6][2] = new Piece(1, 0);
	Square[6][3] = new Piece(1, 0);
	Square[6][4] = new Piece(1, 0);
	Square[6][5] = new Piece(1, 0);
	Square[6][6] = new Piece(1, 0);
	Square[6][7] = new Piece(1, 0);

	Square[7][0] = new Piece(5, 0);
	Square[7][1] = new Piece(2, 0);
	Square[7][2] = new Piece(3, 0);
	Square[7][3] = new Piece(6, 0);
	Square[7][4] = new Piece(4, 0);
	Square[7][5] = new Piece(3, 0);
	Square[7][6] = new Piece(2,	0);
	Square[7][7] = new Piece(5, 0);

	for (int i = 2; i < 6; i ++) {
		for (int j = 0; j < 8; j++) {
			Square[i][j] = new Piece(0, 2);
		}
	}

	for (int file = 0; file < 8; file++) {
		for (int rank = 0; rank < 8; rank++) {
			bool isLightSquere = (file + rank) % 2 == 0;			// if squere is White / Light variable is equal 1, else is equal 0
			int squareColour = (isLightSquere);

			Square[file][rank]->printType();


			std::cout << " | ";
 		}
		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
	}
}

Board::~Board()
{
}
