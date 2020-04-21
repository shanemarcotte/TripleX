#include <iostream>

int main()
{
	// Print story
	std::cout << "\n\nYou are world renowned stuntman turned spy Xander Cage\n";
	std::cout << "You're also really into skateboarding, dirt bike jumps, and skydiving\n";
	std::cout << "For some reason you're friends with Mat Hoffamn and Tony Hawk\n";
	std::cout << "You're currently riding a water-borne drone named Ahab through the center of prague\n";
	std::cout << "You will need to enter a series of codes to disable the biochemical weapon known as Silent Night\n";
	std::cout << "Will you be able to guess the code and stop Anarchy 99 from destroying the world?\n\n";
	
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	// Print sum and product to the terminal
	std::cout << "-- Solve for xXx\n";
	std::cout << "-- The numbers add up to: " << CodeSum << "\n";
	std::cout << "-- The numbers multiply to give: " << CodeProduct << "\n";

	int GuessA, GuessB, GuessC;
	
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;
	
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\n\nSilent Night has been disabled. You've saved the world!\n";
	}
	else
	{
		std::cout << "\n\nEveryone is dead now and it's all your fault.\n";
	}


	return 0;
}