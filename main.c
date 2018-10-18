#include <stdio.h>
#include "Tic_Tac_Toe.h"

int main( void )
{
	// char myBoard[ SIZE ][ SIZE ];
	// char myTokens[] = { 'O', 'X' };
	// setUpBoard( myBoard );

	// getMove( myBoard, 'X' );

	// printBoard( myBoard );

	// char board[ SIZE ][ SIZE ] = { 
	// 	{ '1', '2', '3' }, 
	// 	{ '4', '5', '6' }, 
	// 	{ '7', '8', '9' }
	// };

	#ifndef TESTING
	#define TESTING
	//	note in all test cases 'O' wins

	char testBoard1[ SIZE ][ SIZE ] = { { 'q', 'q', 'q' }, { 'O', 'O', 'O' }, { 'q', 'q', 'q' } };
	char testBoard2[ SIZE ][ SIZE ] = { { 'q', 'q', 'O' }, { 'q', 'q', 'O' }, { 'q', 'q', 'O' } };
	char testBoard3[ SIZE ][ SIZE ] = { { 'q', 'q', 'O' }, { 'q', 'O', 'q' }, { 'O', 'q', 'q' } };
	char testBoard4[ SIZE ][ SIZE ] = { { 'O', 'q', 'q' }, { 'q', 'O', 'q' }, { 'q', 'q', 'O' } };

	if ( gameWon( testBoard1, 'X' ) )
		printf("%s\n", "Test case 1 passed" );
	else
		printf("failed\n");

	if ( gameWon( testBoard2, 'X' ) )
		printf("%s\n", "Test case 2 passed" );
	else
		printf("failed\n");

	if ( gameWon( testBoard3, 'X' ) )
		printf("%s\n", "Test case 3 passed" );
	else
		printf("failed\n");

	if ( gameWon( testBoard4, 'X' ) )
		printf("%s\n", "Test case 4 passed" );
	else
		printf("failed\n");

	#endif

	return 0;
}	//	end main