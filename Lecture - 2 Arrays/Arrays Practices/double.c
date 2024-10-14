// #include <cs50.h>
// #include <stdio.h>

// int main(void)
// {
//     int seq[5];
//     seq[0] = 1;
//     printf("%i\n", seq[0]);

//     for (int i = 1; i < 5; i++)
//     {
//         seq[i] = seq[i - 1] * 2;
//         printf("%i\n", seq[i]);
//     }
// }


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = 8;
    int expo[size];

    expo[0] = 1;
    printf("%i\n", expo[0]);

    for (int i = 1; i < size; i++)
    {
        expo[i] = expo[i - 1] * 2;
        printf("%i\n", expo[i]);
    }

}
