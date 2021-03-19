#include "Board.h"

Board::Board()
{
}

Board::~Board()
{
}

void Board::printBoard()
{
	std::cout << "Current board\n  ------------------------------- " << std::endl;
	for (int file = 0; file < 8; file++) {
		std::cout << " | ";
		for (int rank = 0; rank < 8; rank++) {
			std::cout << board[rank][file] << " | ";
		}
		std::cout << std::endl << "  -------------------------------" << std::endl;
	}
}

void Board::InitDefaultBoardSettings()
{
	char defaultBoardSetting[8][8] = {
		{ 'r', 'p', '0', '0', '0', '0', 'P', 'R'},
		{ 'h', 'p', '0', '0', '0', '0', 'P', 'H'},
		{ 'b', 'p', '0', '0', '0', '0', 'P', 'B'},
		{ 'q', 'p', '0', '0', '0', '0', 'P', 'Q'},
		{ 'k', 'p', '0', '0', '0', '0', 'P', 'K'},
		{ 'b', 'p', '0', '0', '0', '0', 'P', 'B'},
		{ 'h', 'p', '0', '0', '0', '0', 'P', 'H'},
		{ 'r', 'p', '0', '0', '0', '0', 'P', 'R'},
	};

	copyBoard(defaultBoardSetting, board);
}

char Board::getPieceAtPosition(int file, int rank)
{
	if (file < 8 && file >= 0 && rank < 8 && rank >= 0) {
		char pieceAtPosition = board[file][rank];
		return pieceAtPosition;
	}
	else
	{
		std::cout << "Wrong file or rank in getPieceAtPosition() function." << std::endl;
		return '0';
	}
}

void Board::setPieceAtPosition(int file, int rank, char piece)
{
	if (file < 8 && file >= 0 && rank < 8 && rank >= 0) {
		board[file][rank] = piece;
	}
	else
	{
		std::cout << "Wrong file or rank in setPieceAtPosition() function." << std::endl;
	}
}

EnumColor Board::getPieceColour(char pieceType)
{
	if(pieceType > 'a' && pieceType < 'z')
		return EnumColor::Black;	
	else if (pieceType >= 'A' && pieceType < 'Z')
		return EnumColor::White;
	else
		return EnumColor::None;
}

void Board::copyBoard(char from[8][8], char to[8][8])
{
	for (int file = 0; file < 8; file++) {
		for (int rank = 0; rank < 8; rank++) {
			to[file][rank] = from[file][rank];
		}
	}
}
