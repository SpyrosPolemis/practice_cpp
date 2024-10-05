#pragma once // IDE recommendation - prevents header file from being included multiple times
#include <vector>

void display_misses(int misses);

// TODO: Declare functions

void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::string answer, std::vector<char> incorrect_letters);