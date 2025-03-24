//Stephen Duffy X and O's

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char grid[3][3]; //2d array
const char USER = 'O';//the player will use O to play the game

void board(); // prints out the board
void restart(); // 
int spaces(); //checks to see if all the remaining spaces have been played if so the game ends
void turn(); // the players turn
char winorlose(); //to see if the player or the computer got 3 letters across
void win(); //displays the winner

int main()
{
	char win = ' ';

restart();
board();

return 0;
}

void board() //prints the board
{
	printf(" 1 | 2 | 3", grid[0][0], grid[0][1], grid[0][2]);
	printf("\n-----------");
	printf("\n 4 | 5 | 6", grid[1][0], grid[1][1], grid[1][2]);
	printf("\n-----------");
	printf("\n 7 | 8 | 9", grid[2][0], grid[2][1], grid[2][2]);
	printf("\n");
}

void restart()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = ' ';
		}
			
	}
}

int spaces()
{

}

void turn()
{

}

char winorlose()
{

}

void win()
{

}
