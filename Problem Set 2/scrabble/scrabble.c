#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int main(void)
{
    int punten1 = 0;
    int punten2 = 0;

    string word1 = get_string("Player 1: ");
    int letters1 = strlen(word1);

    string word2 = get_string("Player 2: ");
    int letters2 = strlen(word2);

    for (int i = 0; i < letters1; i++)
    {
        if (isupper(word1[i]))
        {
            punten1 += POINTS[word1[i] - 'A'];
        }
        else if (islower(word1[i]))
        {
            punten1 += POINTS[word1[i] - 'a'];
        }
    }

    for (int i = 0; i < letters2; i++)
    {
        if (isupper(word2[i]))
        {
            punten2 += POINTS[word2[i] - 'A'];
        }
        else if (islower(word2[i]))
        {
            punten2 += POINTS[word2[i] - 'a'];
        }
    }

    if (punten1 > punten2)
    {
      printf("Player 1 wins!\n");
    }
    else if (punten1 < punten2)
    {
      printf("Player 2 wins!\n");
    }
    else
    {
      printf("Tie!\n");
    }
}
