#include <stdio.h>
#include <fstream>


//add 2 player mode

//do WinCheck as a function using pointers?
//Giant Tic Tac Toe ascii art with a for loop printf descent animation


int main() {

	char grid[3][3]{ { ' ',' ',' ' }, { ' ',' ',' ' }, { ' ',' ',' ' } };

	char c=0;
	char name[10];


	//ASCII ART from https://patorjk.com/software/taag
	printf(" __  __  _                    ___    _       \n");
	printf(" \\ \\/ / ( )  ___       _     / _ \\  ( )  ___ \n");
	printf("  \\  /  |/  / __|    _| |_  | | | | |/  / __| \n");
	printf("  /  \\      \\__ \\   |_   _| | |_| |     \\__ \\ \n");
	printf(" /_/\\_\\     |___/     |_|    \\___/      |___/ \n");
	

	printf("Name?: ");
	fgets(name, sizeof(name), stdin);
	printf("Press Enter to start"); 
	scanf_s(" %c", &c);
	
	printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
	printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
	printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
	printf("-------------------------\n");

	int i, j, k, x=0, y=0, bot_score=0, player1_score=0, player2_score=0, Bof=3;
	char yn, move;

	srand((int)time(0));

	for (k = 0; k < 9; k++) {
		int bot_movecheck = 0, player1_movecheck=0;


		if (k > 0){
		printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
		printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
		printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
		printf("-------------------------\n");

		
			printf("%i\t%i\n", x, y);
		}
		printf("Place X: ");
		while (player1_movecheck == 0) {
			scanf_s(" %c", &move, 1);
			switch (move) {
			case '1':
				if (grid[0][0] == ' ') {
					grid[0][0] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '2':
				if (grid[0][1] == ' ') {
					grid[0][1] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '3':
				if (grid[0][2] == ' ') {
					grid[0][2] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '4':
				if (grid[1][0] == ' ') {
					grid[1][0] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '5':
				if (grid[1][1] == ' ') {
					grid[1][1] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '6':
				if (grid[1][2] == ' ') {
					grid[1][2] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '7':
				if (grid[2][0] == ' ') {
					grid[2][0] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '8':
				if (grid[2][1] == ' ') {
					grid[2][1] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			case '9':
				if (grid[2][2] == ' ') {
					grid[2][2] = 'X';
					player1_movecheck = 1;
				}
				else {
					printf("\a");
				}
				break;
			}
		}
		//BOT LOGIC
		
		//Bot win now checks
		//makes move if center is empty
		if (grid[1][1] == ' ') {
			grid[1][1] = 'O';
			bot_movecheck = 1;
		}
		//makes move if bot can win now in any row 
		if (bot_movecheck == 0) {
			for (i = 0; i < 3; i++) {
				if ((grid[i][0] + grid[i][1] + grid[i][2]) == 190) {
					for (j = 0; j < 3; j++) {
						if (grid[i][j] == ' ') {
							grid[i][j] = 'O';
							i = 3;
							bot_movecheck = 1;
						}
					}
				}
			}
		//makes move if bot can win now in any column
		if (bot_movecheck == 0) {
			for (i = 0; i < 3; i++) {
				if ((grid[0][i] + grid[1][i] + grid[2][i]) == 190) { 
					for (j = 0; j < 3; j++) {
						if (grid[j][i] == ' ') {
							grid[j][i] = 'O';
							i = 3;
							bot_movecheck = 1;
						}
					}
				}
			}
		//makes move if bot can win now on l-r diagonal 
		if (bot_movecheck == 0) {
				if ((grid[0][0] + grid[1][1] + grid[2][2]) == 190) {
					for (i = 0; i < 3; i++) {
							if (grid[i][i] == ' ') {
							grid[i][i] = 'O';
							i = 3;
							bot_movecheck = 1;
						}

					}
				}
			}
		//makes move if bot can win now on r-l diagonal
		if (bot_movecheck == 0) {
			if ((grid[0][0] + grid[1][1] + grid[2][2]) == 190) {

				if (grid[2][0] == ' ') {
					grid[2][0] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
				if (grid[1][1] == ' ') {
					grid[1][1] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
				if (grid[0][2] == ' ') {
					grid[0][2] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
			
			}
		}
		//Player win now checks
		//makes move if player can win now in any row
		if (bot_movecheck == 0) {
			for (i = 0; i < 3; i++) {
				if ((grid[i][0] + grid[i][1] + grid[i][2]) == 208) {
					for (j = 0; j < 3; j++) {
						if (grid[i][j] == ' ') {
							grid[i][j] = 'O';
							i = 3;
							j = 3;
							bot_movecheck = 1;
						}
					}
				}
			}
		}
		//makes move if player can win now in any column
		if (bot_movecheck == 0) {
			for (i = 0; i < 3; i++) {
				if ((grid[0][i] + grid[1][i] + grid[2][i]) == 208) {
					for (j = 0; j < 3; j++) {
						if (grid[j][i] == ' ') {
							grid[j][i] = 'O';
							i = 3;
							j = 3;
							bot_movecheck = 1;
						}
					}
				}
			}
		}
		//makes move if player can win now on l-r descending diagonal
		if (bot_movecheck == 0) {
			if ((grid[0][0] + grid[1][1] + grid[2][2]) == 208) {
				for (i = 0; i < 3; i++) {
					if (grid[i][i] == ' ') {
						grid[i][i] = 'O';
						i = 3;
						bot_movecheck = 1;
					}
				}
			}
		}
		//makes move if player can win now on l-r ascending diagonal
		if (bot_movecheck == 0) {
			if ((grid[0][0] + grid[1][1] + grid[2][2]) == 208) {
				if (grid[2][0] == ' ') {
					grid[2][0] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
				else if (grid[1][1] == ' ') {
					grid[1][1] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
				else if (grid[0][2] == ' ') {
					grid[0][2] = 'O';
					i = 3;
					bot_movecheck = 1;
				}
			}
		}

		//makes random move
		if (bot_movecheck == 0) {
			for (i = 0; i < 10; i++) {
				x = rand() % 3;
				y = rand() % 3;

				if (grid[x][y] == ' ') {
					grid[x][y] = 'O';
					bot_movecheck = 1;
					i = 10;
				}
			}
		}





				for (i = 0; i < 3; i++) { //Win check for Bot

					if ((grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O') || (grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O') || (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') || (grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O')) {
						bot_score++;
						if (bot_score + player1_score == Bof) {
							Bof += 2;
						}
						printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
						printf("-------------------------\n");
						printf("i WIN! Wanna try again? Best of %i? Y/N: ", Bof);
						scanf_s(" %c", &yn, 1);

						if (yn == 'Y' || yn == 'y') {
							for (i = 0; i < 3; i++) {
								for (j = 0; j < 3; j++) {
									grid[i][j] = ' ';
								}
							}
							k = 0;
							yn = 'a';
						}
						else if (yn == 'N' || yn == 'n') {
							printf("\n\nGG.");
							k = 10;
						}


					}
					//Win check for Player
					else if ((grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X') || (grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X') || (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') || (grid[2][0] == 'X' && grid[1][1] == 'X' && grid[0][2] == 'X')) {
						player1_score++;
						if (bot_score + player1_score == Bof) {
							Bof += 2;
						}
						printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
						printf("-------------------------\n");
						printf("Good win %sWanna play again? Best of %i? Y/N: ", name, Bof);
						scanf_s(" %c", &yn, 1);

						if (yn == 'Y' || yn == 'y') {
							for (i = 0; i < 3; i++) {
								for (j = 0; j < 3; j++) {
									grid[i][j] = ' ';
								}
							}
							k = 0;
							yn = 'a';
						}
						else if (yn == 'N' || yn == 'n') {
							printf("\n\nGG.");
							k = 10;
						}
					}
					//Draw check
					else if (k == 4) {
						printf("\n-------------------------\n  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
						printf("-------------------------\n  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
						printf("-------------------------\n");
						printf("Draw. Wanna play again? Best of %i? Y/N: ", Bof);
						scanf_s(" %c", &yn, 1);
						if (yn == 'Y' || yn == 'y') {
							for (i = 0; i < 3; i++) {
								for (j = 0; j < 3; j++) {
									grid[i][j] = ' ';
								}
							}
							k = 0;
							yn = 'a';
						}
						else if (yn == 'N' || yn == 'n') {
							printf("\n\nGG.");
							k = 10;
						}
					}
				}
			}
		}

	}
	
	return 0;
}

