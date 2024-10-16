#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Calling all function prototypes
int countLetters(string text);
int countWords(string text);
int countSentences(string text);

int main(void)
{
    // Prompt user for some text
    string text = get_string("Text: ");

    // Compute the number of letters, words and sentences. Using & calling functions
    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);

    // Computer grade using Coleman Formula
    // >> L = average number of letters per 100 words
    // >> S = average number of sentences per 100 words
    // >> Coleman Formula
    // >>>> index = 0.0588 * L - 0.296 * S - 15.8

    float L = (letters / (float) words * 100);
    float S = (sentences / (float) words * 100);

    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Converting index from float to integer grade.

    int grade = round(index);

    // Print grade level. Checking where the index falls accoring to grade level.

    if (grade < 1)
    {
        printf("Grade 1");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
    printf("\n");
}

// Making functions to compute number of letters, words and sentences.

// >> Letters
int countLetters(string text)
{
    // Initializing letters @ 0 cuz we want to count all letters.
    int letters = 0;

    // Assinging "n" for length
    int n = strlen(text);

    // Iterating through the string for counting letters using "isalpha" check
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// >> Words
int countWords(string text)
{
    // Initializing words @ 1 cuz we will be looling for spaces and there wont be any space after
    // the last word
    int words = 1;

    // Assigning "n" for length
    int n = strlen(text);

    // Iterating through string, looking for spaces
    for (int i = 0; i < n; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

// >> Sentences
int countSentences(string text)
{
    // Initializing sentences @ 0
    int sentences = 0;

    // Assinging "n" for len
    int n = strlen(text);

    // Iterating through string while looking for puntuation marks "!", "." and "?"
    for (int i = 0; i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
