#include "Board.h"

int main() {
	Board myBoard;

	// Init start board settings
	myBoard.InitDefaultBoardSettings();
	myBoard.printBoard();

	std::cout << myBoard.captureIsAvaiable(1, 2, 4, 4);

	std::cout << myBoard.captureIsAvaiable(1, 1, 7, 6);

	myBoard.printBoard();
	myBoard.boardInverse();
	myBoard.printBoard();


	// Current board function test 
	/*std::cout << myBoard.getPieceAtPosition(0, 0);

	myBoard.setPieceAtPosition(5, 5, 'K');
	
	std::cout << myBoard.getPieceAtPosition(5, 5);

	myBoard.printBoard();
	*/
	return 0;
}