// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string s = "Hi!";

//     // printf("%s\n", s);
//     // #######################################
//     // printf("%c%c%c\n", s[0], s[1], s[2]);
//     // #######################################
//     printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
// }


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string words[2];
    words[0] = "Hi!";
    words[1] = "Bye!";

    printf("%c %c %c", words[0][0], words[0][1], words[0][2]);
    printf("%c %c %c %c", words[1][0], words[1][1], words[1][2], words[1][3]);
}
