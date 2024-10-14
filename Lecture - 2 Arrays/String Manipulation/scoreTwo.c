#include <stdio.h>
#include <cs50.h>

// Making global const int N.
const int N = 3;

// Calling Function for "Average"
float avg(int length, int array[]);

int main(void)
{
    // As N is already declared as global const, now we will proceed to prompting user for scores
    int score[N];
    for (int i=0; i < N; i++)
    {
        score[i] = get_int("Score: ");
    }

    // Printing Average using function for average

    printf("Average: %f\n", avg(N, score));
}

// Now making Average - avg function

float avg(int length, int array[])
{
    // Making Sum for average
    int sum = 0;
    for (int i=0; i < length; i++)
    {
        sum+=array[i];
    }
    return sum / length;
}
