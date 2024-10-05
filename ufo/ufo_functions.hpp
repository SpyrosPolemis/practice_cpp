#pragma once // IDE recommendation - prevents header file from being included multiple times
#include <vector>

void display_misses(int misses);


void greet();
void handle_guess(std::string codeword, std::string answer, int &misses, std::vector<char> incorrect_letters, bool guessed_correct_letter, char user_guess);
void end_game(std::string answer, std::string codeword);
void display_status(std::string answer, std::vector<char> incorrect_letters);