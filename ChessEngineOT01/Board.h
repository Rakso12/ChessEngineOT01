#include <iostream>
#include "EnumBase.h"

#pragma once

class Board
{
public:
	Board();
	~Board();

	void printBoard();
	void InitDefaultBoardSettings();

	char getPieceAtPosition(int file, int rank);
	void setPieceAtPosition(int file, int rank, char piece);
	
	EnumColor getPieceColour(char pieceType);

private:
	char board[8][8];
	void copyBoard(char from[8][8], char to[8][8]);
};
