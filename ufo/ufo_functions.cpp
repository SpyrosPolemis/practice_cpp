#include <iostream>
#include <vector>

//  TODO: Define functions

void greet() {
	std::cout << "=============\n";
	std::cout << "UFO: The Game\n";
	std::cout << "=============\n";
	std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void display_status(std::string answer, std::vector<char> incorrect_letters) {
	// Display incorrect letters guessed
	for (char incorrect_letter: incorrect_letters) {
		std::cout << incorrect_letter;
	}
	std::cout << "\n";
	// Display correct letters guessed
	for (char letter: answer) {
		std::cout << letter << " ";
	}
	std::cout << "\n";
}

void handle_guess(std::string codeword, std::string answer, int &misses, std::vector<char> incorrect_letters,
                  bool guessed_correct_letter, char user_guess) {
	// Check to see if guess is correct and edit answer accordingly
	for (int i = 0; i < codeword.length(); i++) {
		if (user_guess == codeword[i]) {
			answer[i] = user_guess;
			guessed_correct_letter = true;
		}
	}

	if (guessed_correct_letter) {
		std::cout << "Correct!\n";
	} else {
		std::cout << "Wrong! Your friend floats a little bit higher >:(\n";
		incorrect_letters.push_back(user_guess);
		misses++;
	}
	guessed_correct_letter = false; // Reset for next turn
}


void end_game(std::string answer, std::string codeword) {
	if (answer == codeword) {
		std::cout << "You win! And you saved your friend :)";
	} else {
		std::cout << "You lose! And your friend was taken far far away :(";
	}
}


void display_misses(int misses) {
	if (misses == 0 || misses == 1) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /   0   \\      / `-----------'  \n";
		std::cout << "            /  --|--  \\    /                 \n";
		std::cout << "           /     |     \\                     \n";
		std::cout << "          /     / \\     \\                   \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 2) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  0  \\        (  Send help! ) \n";
		std::cout << "             / --|-- \\      / `-----------'  \n";
		std::cout << "            /    |    \\    /                 \n";
		std::cout << "           /    / \\    \\                    \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 3) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 3) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 4) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  |  \\        (  Send help! ) \n";
		std::cout << "             /  / \\  \\      / `-----------' \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 5) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              / / \\ \\        (  Send help! )\n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	} else if (misses == 6) {
		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";
	}
}
