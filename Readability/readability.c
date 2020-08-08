#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)

{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')

        {
            letters++;
        }

        if (text[i] >= 'A' && text[i] <= 'Z')

        {
            letters++;
        }

        if (text[i] == ' ')

        {
            words++;
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')

        {
            sentences++;
        }
    }
    float L = letters / (float) words * 100;
    float S = sentences / (float) words * 100;
    float index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index >= 1 && index < 16)
    {
        printf("Grade %.0f", index);
    }

    else if (index < 1)
    {
        printf(" Before Grade 1");
    }

    else if (index > 16)
    {
        printf("Grade 16+");
    }
    printf("\n");
}



