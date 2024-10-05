/*
 * Written by, Spyros Polemis, 05/10/2024
 *
 * Hangman with a less? grim premise
 *
 * Written to practice using functions
 */


#include <iostream>
#include <string>
#include <vector>
#include "ufo_functions.hpp"


int main() {

	greet();

	std::string codeword = "codeword";
	std::string answer = "________";
	int misses = 0;
	bool guessed_correct_letter = false;
	char user_guess;

	while (answer != codeword && misses < 7) {
		std::vector<char> incorrect_letters;
		display_misses(misses);
		display_status(answer, incorrect_letters);

		std::cout << "Guess: ";
		std::cin >> user_guess;

		handle_guess(codeword, answer, misses, incorrect_letters, guessed_correct_letter, user_guess);
	}

	end_game(answer, codeword);
}
