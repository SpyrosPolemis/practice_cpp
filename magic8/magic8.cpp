/*
 * Written by, Spyros Polemis, 03/10/2024
 * Generates a random number, picks a fortune from a text file based on number
 *
 * Written to practice interacting with files.
 */

#include <iostream>
#include <cstdlib>
#include <fstream>

int main() {
	srand((unsigned) time(0));
	int random_num = rand() % 21;

	std::string bin = ""; // Create a bin to put all lines before random
	std::string fortune = ""; // Create var for actual fortune

	std::ifstream MyFile("magic8.txt"); //open txt file for reading as MyFile
	if (MyFile.is_open()) { // Check file is open, why?
		// for loop puts cursor at right place
		for (int i = 0; i < random_num - 1; i++) {
			getline(MyFile, bin);
			std::cout << fortune;
		}
		getline(MyFile, fortune);
	}

	MyFile.close();


	std::cout << "MAGIC 8-BALL:\n\n";
	std::cout << fortune << random_num;
}
