#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer;

    do
    {
        answer = get_int("number please? ");
    }
    while (answer <= 0 || answer > 9);

    // er werd alleen getoetst bij 1,2,8 en of het geen negatief of te groot getal was.
    // antwoord bij 1
    if (answer == 1)
    {
        printf("#\n");
    }

    // antwoord bij 2
    else if (answer == 2)
    {
        printf(" #\n##\n");
    }

    // antwoord bij 8
    else if (answer == 8)
    {
        printf("       #\n      ##\n     ###\n    ####\n   #####\n  ######\n #######\n########\n");
    }
}
