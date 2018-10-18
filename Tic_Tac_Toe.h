#ifndef TTT_h
#define TTT_h

#include <stdbool.h>

#define SIZE 3

#define ARRAY_SIZE 9

#define NO_ONE '1'

#define CHAR_EQUALS( A, B, C ) ( ( A == B ) && ( B == C ) ) ? true : false	

/*
 *A function to print the game board
 */
void setUpBoard( char[][ SIZE ] );

/*
 *Prints the game board
 */
void printBoard( char[][ SIZE ] ); 

/*
 *Function to solicit the move off the player
 */
bool getMove( char board[][ SIZE ], char player );

/*
 *Function to change the array once a move has been passed
 */
void placeToken( char board[][ SIZE ], int location, char player );

/*
 *Function to check for a win
 */
bool gameWon( char board[][ SIZE ], char player );

/*
 *Function to check if a move has been taken already
 */
bool validMove( char board[ SIZE ][ SIZE ], int location );

#endif