/***************************
 ** Conway's Game of Life **
 ***************************/

//LIBRARY TO CREATE INITIAL BOARD (RANDOM CONFIGURATION, USER INPUT, PRE-MADE PATTERN ARCHIVES)
//OVERLAY BOARDS
//ALIVE CELLS ARE PIXELS
//WHITE NOISE

#include<stdio.h>
#define H 7 //Height
#define W 7 //Width
/*Height and width must have +2 for border*/

void display(char board[H][W]);
void copy(char board[H][W], char boardcopy[H][W]);
void kill(char board[H][W], char boardcopy[H][W]);

int main(){
	char tempboard[H][W];
	/*char board[H][W] = {
	   "#######",
	   "#.....#",
	   "#.....#",
	   "#.....#",
	   "#.....#",
	   "#.....#",
	   "#######"};
	   CREATE BOARD STACK
	   */

	for (int i = 0 ; i < 10 ; i++){
		display(board);
		copy(board,tempboard);
		kill(board,tempboard);
	}

	return 0;
}

/* Display actual board without border */
void display(char board[H][W]){
	int i, j;
	for (i = 1 ; i < H-1 ; i++){
		for (j = 1 ; j < W-1 ; j++){
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

/* Creates a temporary array with the actual board configuration */
void copy(char board[H][W],char newboard[H][W]){
	int i, j;
	for (i = 1 ; i < H-1 ; i++) for (j = 1 ; j < W-1 ; j++) newboard[i][j] = board[i][j];
}

/* Rules of the game: which cells live or die */
void kill(char board[H][W],char tempboard[H][W]){
	int i, j;
	int neighbors = 0;

	for (i = 1 ; i < H-1 ; i++){
		for (j = 1 ; j < W-1 ; j++){
			/*
			[ i-1  j-1 ] [ i-1   j  ] [ i-1  j+1 ]
			[  i   j-1 ] [  i    j  ] [  i   j+1 ] -> Neighboring cells
			[ i+1  j-1 ] [ i+1   j  ] [ i+1  j+1 ]
			*/
			if (tempboard[i-1][j-1] == 'O') neighbors++;
			if (tempboard[i-1][j] == 'O') neighbors++;
			if (tempboard[i-1][j+1] == 'O') neighbors++;
			if (tempboard[i][j-1] == 'O') neighbors++;
			if (tempboard[i][j+1] == 'O') neighbors++;
			if (tempboard[i+1][j-1] == 'O') neighbors++;
			if (tempboard[i+1][j] == 'O') neighbors++;
			if (tempboard[i+1][j+1] == 'O') neighbors++;
			if (board[i][j] == 'O' && (neighbors == 2 || neighbors == 3)) board[i][j] = 'O'; //Cells that live
			else if (board[i][j] == '.' && neighbors == 3) board[i][j] = 'O'; //Cells that are born
			else board[i][j] = '.'; //Cells that die
			neighbors = 0;
		}
	}
}