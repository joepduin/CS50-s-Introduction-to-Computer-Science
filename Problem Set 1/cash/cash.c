#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer;
    int coins;

    // prompt voor hoeveelheid cent
    do
    {
        answer = get_int("Change owed: ");
    }
    // laat terug komen als het lager dan 0 is
    while (answer <= 0);

    // hoeveelheid 25 cent
    for (int i = answer; i > 24; i = i - 25)
    {
        answer = answer - 25;
        coins = coins + 1;
    }

    // hoeveelheid 10 cent
    for (int i = answer; i > 9; i = i - 10)
    {
        answer = answer - 10;
        coins = coins + 1;
    }

    // hoeveelheid 5 cent
    for (int i = answer; i > 4; i = i - 5)
    {
        answer = answer - 5;
        coins = coins + 1;
    }

    // hoeveelheid 1 cent
    for (int i = answer; i > 0; i = i - 1)
    {
        answer = answer - 1;
        coins = coins + 1;
    }

    printf("%i\n", coins);
}
