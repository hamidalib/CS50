#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Points assignmed to each letter
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Calling compute function prototype
int computeScore(string word);

int main(void)
{
    // Input for Player 1 & Player 2 word

    string pOne = get_string("Player 1: ");
    string pTwo = get_string("Player 2: ");

    // Compute score for each player's word

    int oneScore = computeScore(pOne);
    int twoScore = computeScore(pTwo);

    // Announce/Print Winner or "TIE" if equal scores
    if (oneScore > twoScore)
    {
        printf("Player 1 wins!\n");
    }
    else if (oneScore < twoScore)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("TIE!\n");
    }
}

int computeScore(string word)
{
    // Keeping track of score
    int score = 0;

    // Computing score for each chracter
    int scoreLen = strlen(word);
    for (int i = 0; i < scoreLen; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
