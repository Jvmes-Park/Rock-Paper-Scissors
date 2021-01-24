#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <time.h>
#include <random>

using namespace std;

//Current problems in the code:
//It is not randomly generated. For some reason. 
//If you make a wrong mistake in input, it wont accept the next right one. Possible solution: Change the cases to if else and while. Put the while error catcher before the if and else if. 

int main() {
	int player_choice;
	srand (time(NULL));
	int computer_choice = rand() %3 +1;
	vector<string>ending = {"\nBruh, you lost to a computer!\n", "You won! Congrats!\n", "Its a draw!\n"};
	vector<string>choice = {"\nRock\n", "\nPaper\n", "\nScissors\n"};
	vector<string>dramatic = {"ROCK!\n", "PAPER!\n", "SCISSORS!\n"};
	bool loop = true;
	while(loop) {
		cout <<"*=========================*\n";
		cout <<"|  WELCOME TO THE GAME OF |\n";
		cout <<"|   ROCK PAPER SCISSORS!  |\n";
		cout <<"*=========================*\n\n";
		cout <<"     +---------------+\n"
		       "     |  Choices:     |\n"
		       "     |               |\n"
		       "     |  Rock(1)      |\n"
		       "     |  Paper(2)     |\n"
		       "     |  Scissors(3)  |\n"
		       "     |  Exit(0)      |\n"
		       "     +---------------+\n"
		       "          Entry:\n";
		cin >> player_choice;
		if (player_choice == 1) {
			cout <<choice[0];
		}
		else if (player_choice == 2) {
			cout <<choice[1];
		}
		else if (player_choice == 3) {
			cout <<choice[2];
		}
		else if (player_choice == 0) {
			loop = false;
		}
		else {
			bool player_error = true;
			while (player_error) {
				while(player_choice != 1 && player_choice != 2 && player_choice != 3 && player_choice != 0) {
					cout <<"  ERROR! INVALID INPUT, try again.\n";
					cout <<"     +---------------+\n"
					       "     |  Choices:     |\n"
					       "     |               |\n"
					       "     |  Rock(1)      |\n"
		 			       "     |  Paper(2)     |\n"
					       "     |  Scissors(3)  |\n"
					       "     |  Exit(0)      |\n"
					       "     +---------------+\n"
					       "        Entry:\n";
					cin >>player_choice;
					if (player_choice == 1) {
						cout <<choice[0];
						player_error = false;
					}
					else if (player_choice == 2) {
						cout <<choice[1];
						player_error = false;
					}
					else if (player_choice == 3) {
						cout <<choice[2];
						player_error = false;
					}
					else if (player_choice == 0) {
						loop = false;
						player_error = false;
					}
					else {
	
							}
				}
		}
		}
		cout << "V.S...\n"<<endl;
		switch(computer_choice) {
			case 1:
				cout <<dramatic[0];
				break;
			case 2:
				cout <<dramatic[1];
				break;
			case 3:
				cout <<dramatic[2];
				break;
			default:
				cout << "What? The computer chose an invalid output...How?"<<endl;
		}
		cout << "And the result is:" <<endl;
		cout <<" . . . \n"<<endl;
		if (player_choice == computer_choice)
			cout <<ending[2];
		else if (player_choice == 2 && computer_choice == 1)
			cout <<ending[1];
		else if (player_choice == 3 && computer_choice == 2)
			cout <<ending[1];
		else if (player_choice == 1 && computer_choice == 3)
			cout <<ending[1];
		else
			cout <<ending[0];
		bool game_over = true;
		while(game_over) {

			cout <<"        +---------------+\n"
			       "        |  Play Again?  |\n"
			       "        |               |\n"
			       "        |    Yes (1)    |\n"
			       "        |    No  (0)    |\n"
			       "        +---------------+\n";
			int restart;
			cin >>restart;
			if (restart == 1 ){
				game_over = false;
			;}
			else if (restart == 0) {
				loop = false;
				game_over = false;
			}
			else	{
				bool is_error = true;
				while(is_error) {
					while (restart != 1 && restart != 0) {
						cout <<"  ERROR! INVALID INPUT, try again.\n";
						cout <<"        +---------------+\n"
						       "        |  Play Again?  |\n"
						       "        |               |\n"
						       "        |    Yes (1)    |\n"
						       "        |    No  (0)    |\n"
						       "        +---------------+\n";
							cin >>restart;
							if (restart == 1) {
								is_error = false;
								game_over = false;
							}
							else if (restart == 2) {
								is_error = false;
								loop = false;
								game_over = false;
							}
								else {
								;
							}
					}
			}
		}
	}
	}
	return 0;
}
