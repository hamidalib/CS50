#include <stdio.h>
#include <cs50.h>

// Making global const N - number of scores iterations

const int N = 3;

// Calling Average function prototype
float average(int lenght, int array[]);

int main(void)
{
    int scores[N];
    // Propmting user for scores
    for (int i=0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Prompting User if he wants average or not using conditionals

    char command = get_char("Do you want average of your score? Y/n\n");

    if (command == 'Y' || command == 'y')
    {
    // Now printing average using average function
    printf("Average: %f\n", average(N, scores));
    }
    else if (command == 'N' || command == 'n')
    {
        printf("You did'nt request average of your score!");
    }
    else
    {
        printf("Invalid Command!!!");
    }


}

// Making Average Function

float average(int length, int array[])
{
    // Making sum for ultimately getting average
    int sum = 0;
    for (int i=0; i < length; i++)
    {
        sum += array[i];
    }

    // Getting return value as the Average by dividing sum with array length
    return sum / length;
}
