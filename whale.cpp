/*
 * Written by, Spyros Polemis, 03/10/2024
 *
 * Takes a string and translates it into its "whale talk" equivalent:
 * Only vowels, u's and e's twice as long
 *
 * Written to practice using vectors
 */

#include <iostream>
#include <vector>
#include <string>

int main () {

 //Get user input
 std::string human_talk;
 std::cout << "Enter text: ";
 std::cin >> human_talk;

 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
 std::vector<char> whale_talk;

 // Translate human talk into whale talk
 for (char i : human_talk) {
  for (char j : vowels) {
   if (j == i) {
    whale_talk.push_back(i);
   }
  }
  // Double e's and i's
  if (i == 'e') {
   whale_talk.push_back('e');
  } else if (i == 'i') {
   whale_talk.push_back('i');
  }
 }

 // Print whale talk
 for (char i : whale_talk) {
  std::cout << i;
 }
}
