/*
 * Written by, Spyros Polemis, 06/10/2024
 *
 * Part of CS50 week2 problem set
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pseudocode (I went a BIT above the scope of the original problem)
get 1 word
get 2 word
for each word
for each letter
	score letter
if word1score >
*/

const int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
					  1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_word(string word);

int main(int argc, string argv[])
{

	int nplayers = atoi(argv[1]);
	string word;
	int word_points[nplayers];
	int points;

	int first = word_points[0];
	int first_index = 0;

	// Get and calculate value of each word
	for (int i = 0; i < nplayers; i++)
	{
		word = get_string("Word %i: ", i + 1);
		points = compute_word(word);
		word_points[i] = points;

		// Find value and index of largest score
		if (word_points[i] > first)
		{
			first = word_points[i];
			first_index = i;
		}
	}

	// Moved to above for loop
	// int first = word_points[0];
	// int first_index = 0;

	// for (int i = 0; i < nplayers; i++) {
	//     if (word_points[i] > first) {
	//         first = word_points[i];
	//         first_index = i;
	//     }
	// }

	// Print winner
	printf("The winner is player %i, with a score of %i!", first_index + 1,
		   word_points[first_index]);

	// Test - Check that points are being calculated correctly
	// for (int i = 0; i < nplayers; i++) {
	//     printf("%i", word_points[i]);
	// }
	// printf("\n");
}

int compute_word(string word)
{
	// Calculate scrabble points for given word.
	int points = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		points += POINTS[(word[i] - '0') % 24];
	}
	return points;
}
