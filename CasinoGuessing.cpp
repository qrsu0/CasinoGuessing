#include <iostream>
#include <cstdio>

void casinoEasy() {
	int generated;
	int gamer;

	generated = rand() % 6 + 1;

	std::cout << "\nWrite down a guess from 1 - 5: ";
	std::cin >> gamer;
	for (int i = 0; i < 2; i++) {
		if (gamer == generated) {
			std::cout << "You got it right!" << std::endl;
			std::cout << "You win 100$!\n";
		}
		else {
			std::cout << "Well its wrong try again: ";
			std::cin >> gamer;

		}
	}

	std::cout << "Your chances are done!\n";
}
void casinoMed() {
	int generated;
	int gamer;

	generated = rand() % 51 + 1;

	std::cout << "\nWrite down a guess from 1 - 50: ";
	std::cin >> gamer;
	for (int i = 0; i < 2; i++) {
		if (gamer == generated) {
			std::cout << "You got it right!" << std::endl;
			std::cout << "You win 1000$!\n";
		}
		else {
			std::cout << "Well its wrong try again: ";
			std::cin >> gamer;

		}
	}

	std::cout << "Your chances are done!\n";
}

void casinoHard() {
	int generated;
	int gamer;

	generated = rand() % 101 + 1;

	std::cout << "\nWrite down a guess from 1 - 100: ";
	std::cin >> gamer;
	for (int i = 0; i < 2; i++) {
		if (gamer == generated) {
			std::cout << "You got it right!" << std::endl;
			std::cout << "You win 1000$!\n";
		}
		else {
			std::cout << "Well its wrong try again: ";
			std::cin >> gamer;

		}
	}

	std::cout << "Your chances are done!\n";
}
int main() {
	int choice;
	
	do {
		std::cout << "Weclome to casino\n";
		std::cout << "==================\n";
		std::cout << "1.EASY (PAY 10$ and win 100$) if you guess a number from 1-5\n";
		std::cout << "2.Medium(Pay 10$ and win 1000) if you guess a number from 1-50)\n";
		std::cout << "3.Hard(Pay 10$ and win 5000) if you guess a number from 1-100)\n";
		std::cout << "4.Exit\n";
		std::cout << "==================\n";
		std::cout << "Choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1: casinoEasy();
			break;
		case 2: casinoMed();
			break;
		case 3: casinoHard();
			break;
		case 4: std::cout << "Game is done\n";
			break;
		default: 
			std::cout << "Enter a  valid choice: ";
			std::cin >> choice;
		}
		
	} while (choice != 4);
}