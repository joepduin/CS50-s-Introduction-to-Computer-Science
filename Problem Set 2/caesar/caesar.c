#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, len = strlen(argv[1]); i < len; i++)
          {
            if (isdigit(argv[1][i]))
            {

            }
            else
            {
                printf("Usage: /caesar key\n");
                return 1;
            }

        }
    }
  int key = (atoi(argv[1]));
  for (int i = 0; key > 26; i++)
  {
    key = key - 26;
  }
  string text = get_string("plaintext:  ");
  int lengte = strlen(text);

  printf("ciphertext: ");
  for (int i = 0; i < lengte; i++)
  {
    if (text[i] == '!' || text[i] == ' ' || text[i] == ',')
    {
      char b = text[i];
      printf("%c", b);
    }
    else
    {
      int t = text[i] + key;
      if (t > 122)
      {
        t = t - 26;
      }
      char b = t;
      printf("%c", b);
    }
  }
  printf("\n");
}
