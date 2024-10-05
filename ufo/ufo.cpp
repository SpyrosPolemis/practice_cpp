/*
 * Written by, Spyros Polemis, 05/10/2024
 *
 * Hangman with a less? grim premise
 *
 * Written to practice using functions
 */


#include <iostream>
#include <string>
#include "ufo_functions.hpp"

int main() {
	// TODO: Write main

	greet();

	std::string codeword = "codeword";
	std::string answer = "________";
	int misses = 0;

	while (answer != codeword && misses < 7) {
		// TODO: Simulate turn
		misses++;
	}

	end_game(answer, codeword);
}
