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
	// TODO: Write main

	greet();

	std::string codeword = "codeword";
	std::string answer = "________";
	int misses = 0;
	std::vector<char> incorrect_letters;
	bool guessed_correct_letter = false;

	while (answer != codeword && misses < 7) {
		// TODO: Simulate turn
		display_misses(misses);
		// Display incorrect letters guessed
		display_status(answer, incorrect_letters);

		misses++;
	}

	end_game(answer, codeword);
}
