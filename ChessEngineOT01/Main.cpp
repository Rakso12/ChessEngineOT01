#include "Board.h"

int main() {
	Board myBoard;

	// Init start board settings
	myBoard.InitDefaultBoardSettings();
	myBoard.printBoard();

	// Current board function test 
	std::cout << myBoard.getPieceAtPosition(0, 0);

	myBoard.setPieceAtPosition(5, 5, 'K');
	
	std::cout << myBoard.getPieceAtPosition(5, 5);

	myBoard.printBoard();

	return 0;
}