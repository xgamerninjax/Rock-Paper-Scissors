#include <iostream>
#include <string>
#include <cctype>
#include <ctime>

void PlayGame();

int main()
{
	PlayGame();

	return 0;
}

void PlayGame()
{
	srand(time(NULL));
	int PlayAgain = 1;
	int Wins = 0;
	int Ties = 0;
	int Losses = 0;
	
	do
	{
		int ComputerChoice = rand() % (4 - 1) + 1;
		int CaseNum = 0;
		std::string UserChoice = "";

		std::cout << "Choose Rock, Paper, or Scissors." << std::endl;
		std::cout << "Enter quit to exit the program." << std::endl;
		std::cout << "\nEnter your input: ";
		std::getline(std::cin, UserChoice);
		std::cout << std::endl;

		// Convert user's choice to number for switch statement
		if (UserChoice[0] == 'r' || UserChoice[0] == 'R')
		{
			CaseNum = 1;
		}
		else if (UserChoice[0] == 'p' || UserChoice[0] == 'P')
		{
			CaseNum = 2;
		}
		else if (UserChoice[0] == 's' || UserChoice[0] == 'S')
		{
			CaseNum = 3;
		}
		else if (UserChoice[0] == 'q' || UserChoice[0] == 'Q')
		{
			std::cout << "Quitting Game...\n" << std::endl;
			
			std::cout << "You won a total of " << Wins << " games." << std::endl;
			std::cout << "You tied a total of " << Ties << " games." << std::endl;
			std::cout << "You lost a total of " << Losses << " games." << std::endl;
			PlayAgain = 0;
		}
		else
		{
			std::cout << "Please choose rock, paper, or scissors." << std::endl;
			system("PAUSE");
			system("CLS");
		}

		//Compare user's choice with computer's choice
		switch (CaseNum)
		{
		// Player chooses Rock
		case 1: 
			switch (ComputerChoice)
			{
				// Computer chooses Rock
			case 1:
				std::cout << "Computer chose rock." << std::endl;
				std::cout << "It's a tie!" << std::endl;
				std::cout << std::endl;

				Ties++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

				// Computer chooses Paper
			case 2:
				std::cout << "Computer chose paper." << std::endl;
				std::cout << "Paper beats rock, you lose!" << std::endl;
				std::cout << std::endl;

				Losses++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

				// Computer chooses Scissors
			case 3:
				std::cout << "Computer chose scissors." << std::endl;
				std::cout << "Rock crushes scissors, you win!" << std::endl;
				std::cout << std::endl;
				Wins++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;
			}
			break;

		// Player chooses Paper
		case 2:
			switch (ComputerChoice)
			{
			// Computer chooses Rock
			case 1:
				std::cout << "Computer chose rock." << std::endl;
				std::cout << "Paper covers rock, you win!" << std::endl;
				std::cout << std::endl;
				Wins++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

			// Computer chooses Paper
			case 2:
				std::cout << "Computer chose paper." << std::endl;
				std::cout << "It's a tie!" << std::endl;
				std::cout << std::endl;
				Ties++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

			// Computer chooses Scissors
			case 3:
				std::cout << "Computer chose scissors." << std::endl;
				std::cout << "Scissors cuts paper, you lose!" << std::endl;
				std::cout << std::endl;
				Losses++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;
			}
			break;
		// Player chooses Scissors
		case 3:
			switch (ComputerChoice)
			{
				// Computer chooses Rock
			case 1:
				std::cout << "Computer chose rock." << std::endl;
				std::cout << "Rock crushes scissors, you lose!" << std::endl;
				std::cout << std::endl;
				Losses++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

				// Computer chooses Paper
			case 2:
				std::cout << "Computer chose paper." << std::endl;
				std::cout << "Scissors cuts paper, you win!" << std::endl;
				std::cout << std::endl;
				Wins++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;

				// Computer chooses Scissors
			case 3:
				std::cout << "Computer chose scissors." << std::endl;
				std::cout << "It's a tie!" << std::endl;
				std::cout << std::endl;
				Ties++;
				std::cout << "Wins: " << Wins << std::endl;
				std::cout << "Ties: " << Ties << std::endl;
				std::cout << "Losses: " << Losses << std::endl;
				system("pause");
				system("cls");
				break;
			}
			break;
		}
	}

	while (PlayAgain == 1);

	return;
}