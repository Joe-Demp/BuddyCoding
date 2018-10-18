#include <stdio.h>
#include "Tic_Tac_Toe.h"

/*
 *A function to print the game board
 */
void setUpBoard( char board[][ SIZE ] )
{
	char number = '1';
	int i, j;

	//	adding chars to the board
	for ( i = 0; i < 3; ++i ) {
		for ( j = 0; j < 3; ++j ) {
			board[ i ][ j ] = number++;
		}	//	end inner for
	}	//	end outer for

	//	Printing a welcome message
	puts( "          Here is the board: " );
	
	printBoard( board );
}	//	end setUpBoard

void printBoard( char board[][ SIZE ] )
{
	puts( "\n          Player 1 <O> 	Player 2 <X>\n" );

	puts( "               |     |     " );
	printf( "            %c  |  %c  |  %c\n", board[ 0 ][ 0 ], board[ 0 ][ 1 ], board[ 0 ][ 2 ] );
	puts( "          _____|_____|_____" );
	puts( "               |     |     " );
	printf( "            %c  |  %c  |  %c\n", board[ 1 ][ 0 ], board[ 1 ][ 1 ], board[ 1 ][ 2 ] );
	puts( "          _____|_____|_____" );
	puts( "               |     |     " );
	printf( "            %c  |  %c  |  %c\n", board[ 2 ][ 0 ], board[ 2 ][ 1 ], board[ 2 ][ 2 ] );
	puts( "               |     |     " );
}	//	end printBoard

bool getMove( char board[][ SIZE ], char player )
{
	int move;

	//	getting the move
	printf( "\n" );
	printf( "%s", "Please enter a move > " );
	scanf( "%d", &move );

	//	checking the move and making a decision
	if ( validMove( board ) ) {
		placeToken( board, move, player );
		return true;
	}	//	end if
	else {
		puts( "This is an invalid move." 
				"\nPlease try again");
		return false;
	}	//	end else
}	//	end getMove

void placeToken( char board[][ SIZE ], int location, char player )
{
	char * boardPtr = &( board[ 0 ][ 0 ] );

	//	move the boardPtr to the element you want
	//	location decremented as array is 0 based
	boardPtr += ( location - 1 );
	
	//	then assign the character to the array value
	*boardPtr = player;
}	//	end placeToken

bool gameWon( char board[][ SIZE ], char player )
{
	int i, j;

	//	check all rows
	for ( i = 0; i < SIZE; ++i ) {
		if ( player == board[ i ][ 0 ] )
			if( CHAR_EQUALS( board[ i ][ 0 ], board[ i ][ 1 ], board[ i ][ 2 ] ) )
				return true;
	}	//	end for

	//	check all columns
	for ( j = 0; j < SIZE; ++j ) {
		if ( player == board[ 0 ][ j ] )
			if( CHAR_EQUALS( board[ 0 ][ j ], board[ 1 ][ j ], board[ 2 ][ j ] ) )
				return true;
	}	//	end for

	//	check top left to bottom right diagonal
	if ( player == board[ i ][ j ] )
		if( CHAR_EQUALS( board[ 0 ][ 0 ], board[ 1 ][ 1 ], board[ 2 ][ 2 ] ) )
			return true;

	//	check bottom left to top right diagonal
	if ( player == board[ 2 ][ 0 ] )
		if( CHAR_EQUALS( board[ 2 ][ 0 ], board[ 1 ][ 1 ], board[ 0 ][ 2 ] ) )
			return true;

	return false;
}	//	end gameWon

bool validMove( char board[ SIZE ][ SIZE ], int location )
{
	if
	return true;
}	//	validMove
