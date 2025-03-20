#include <stdio.h>
#include <fstream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include< string.h >

//add 2 player mode
//add best of
//add score
//add near win checkers for bot(player near win(176) and bot near win)
//add if line=79 place O on line after bot near win and player near win
//do WinCheck as a function using pointers?
//Giant Tic Tac Toe ascii art with a for loop printf descent animation
//add \a to prompt move

int main() {

	char grid[3][3]{ { ' ',' ',' ' }, { ' ',' ',' ' }, { ' ',' ',' ' } };

	//char c;
	char name[10];

	printf("Name?: ");
	fgets(name, sizeof(name), stdin);
	printf("Press Enter to start");
	//scanf_s(" %c", &c);


	printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
	printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
	printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
	printf("-------------------------\n");

	int i, j, k, x, y, bot_score=0, player1_score=0, player2_score=0, Bof=3;
	char yn;

	srand((int)time(0));

	for (k = 0; k < 10; k++) {
		if (grid[1][1] == ' ') {
			grid[1][1] = 'O';
		}
		for (i = 0; i < 3; i++) {
			if (grid[i][0] + grid[i][1] + grid[i][2] == 158) {
				for (j = 0; j < 3; j++) {
					if (grid[i][j] == ' ') {
						grid[i][j] = 'O';
						i = 3;
					}
				}
			}

			else {
				 x = rand() % 3;
				 y = rand() % 3;

				if (grid[x][y] == ' ') {
					grid[x][y] = 'O';
				}
			}

				printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
				printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
				printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
				printf("-------------------------\n");

				printf("%i\t%i\n", x, y);

				for (i = 0; i < 3; i++) {

					if ((grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O') || (grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O') || (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') || (grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O')) {
						bot_score++;
						printf("i WIN! Wanna try again? Best of %i? Y/N: ", Bof);
						scanf_s(" %c", &yn);

						if (yn == 'Y' || yn == 'y') {
							//set grid to blanks. Nested for loops?
							k = 0;
						}
						else if (yn == 'N' || yn == 'n') {
							printf("\n\nGG.");
						}


					}
					else if ((grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X') || (grid[0][i] == 'X' && grid[1][i] == 'O' && grid[2][i] == 'O') || (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') || (grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O')) {

					}
				}
			
		}
	}
	return 0;
}
