#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
	std::cout << "\n\nYou are world renowned stuntman turned spy Xander Cage\n";
	std::cout << "You're also really into skateboarding, dirt bike jumps, and skydiving\n";
	std::cout << "For some reason you're friends with Mat Hoffamn and Tony Hawk\n";
	std::cout << "You're currently riding a water-borne drone named Ahab through the center of prague\n";
	std::cout << "You will need to enter a series of codes to disable the biochemical weapon known as \"Silent Night\"\n";
	std::cout << "Will you be able to guess the level " << Difficulty <<" code and stop Anarchy 99 from destroying the world?\n\n";
}

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);
	
	int const CodeA = rand() % Difficulty + Difficulty;
	int const CodeB = rand() % Difficulty + Difficulty;
	int const CodeC = rand() % Difficulty + Difficulty;

	int const CodeSum = CodeA + CodeB + CodeC;
	int const CodeProduct = CodeA * CodeB * CodeC;

	// Print sum and product to the terminal
	std::cout << "-- Solve for xXx\n";
	std::cout << "-- The numbers add up to: " << CodeSum << "\n";
	std::cout << "-- The numbers multiply to give: " << CodeProduct << "\n";

	// Store player guess
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;
	
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	// Check for correct guess
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\n\nLevel " << Difficulty << " Security disabled.\n";
		if (Difficulty == 5)
			std::cout << "\nYou have disabled Silent Night and saved the world!\n";
		return true;
	}
	else
	{
		std::cout << "\n\nIncorrect code entered\n";
		if (Difficulty == 5)
			std::cout << "\nEveryone is dead now and it is all your fault.";
		return false;
	}
}

int main()
{	
	srand(time(NULL)); // seeds rand function to be based on time of day

	int LevelDifficulty = 1;
	int const MaxDifficulty = 5;

	while (LevelDifficulty <= MaxDifficulty)  // Loops until all levels are complete
		{
			bool bLevelComplete = PlayGame(LevelDifficulty);
			std::cin.clear();
			std::cin.ignore();

			if (bLevelComplete)
			{
				++LevelDifficulty;
			}		

		}
	return 0;
}