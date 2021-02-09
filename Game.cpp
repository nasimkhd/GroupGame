#include <stdio.h>

int main() {
	int Scissors= 1, Rock=2, paper=3;
	int player1 = 0, player2 = 0;
	int Continue = 1;
	int totalGame = 3;

	for (int i = 0; i < totalGame; i++) {
		printf("get the number for player one:");
		scanf_s("%d", &player1);
		printf("get the number for player two:");
		scanf_s("%d", &player2);

		switch (Continue) {

		case 1:
			
			if (player1 == 2 && player2 == 1) printf("Player1 is the winner\n");
			else if (player1 == 2 && player2 == 3) printf("player2 is the winner\n");
			
		case 2:
			if (player1 == 3 && player2 == 2) printf("Player1 is the winner\n");
			else if (player1 == 3 && player2 == 1) printf("player2 is the winner\n");
			
		case 3:
			if (player1 == 1 && player2 == 3) printf("Player1 is the winner\n");
			else if (player1 == 1 && player2 == 2) printf("player2 is the winner\n");
			
		case 4:
			if (player1 == player2) printf("The game is repeated\n");
			break;
		}
	}

}