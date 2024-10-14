#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Number of Scores
    const int N = 3;

    // Making an array of scores of length 3

    int score[N];

    // Iterating Score in a for loop to get values of 3 scores

    for (int i=0; i < N; i++)
    {
        score[i] = get_int("Score:\n");
    }

    // Now printing Average of Scores

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float) N);
}
