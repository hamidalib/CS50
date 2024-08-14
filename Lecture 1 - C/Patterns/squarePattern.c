// #include <stdio.h>
// #include <cs50.h>
// void square(int dimensions);
// int main(void)
// {
//     int n;

//     // Prompt user for square size
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while(n <= 0);

//     // PRINTING SQUARE - Using Function
//     for(int i=0; i<n; i++)
//     {
//         square(n);
//     }

// }


// void square(int dimensions)
// {

//     // SQUARE Dimension
//     for(int i=0; i<dimensions; i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }


#include <stdio.h>
#include <cs50.h>
void square(int dimension);
int main(void)
{
    // Prompt user for square size
    int n;

    do
    {
        n = get_int("Square size: ");
    }
    while (n <= 0);

    // Printing SQUARE - Using Function
    for (int i=0; i < n; i++)
    {
        square(n);
    }
}


void square(int dimension)
{
    // Printing Square
    for (int i=0; i < dimension; i++)
    {
        printf("#");
    }
    printf("\n");
}
