#include <cs50.h>
#include <stdio.h>

// Making global const N
const int N = 5;

// Calling average function prototype
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // Prompting user for scores
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Your Score: \n");
    }

    // Printing average
    printf("Average: %f\n", average(N, scores));
}

// Making average function
float average (int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}
