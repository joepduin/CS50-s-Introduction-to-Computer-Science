#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  int letters = 0;
  int zinnen = 0;
  int woorden = 1;

  string text = get_string("Text: ");
  int tekens = strlen(text);

  for(int i = 0; i < tekens; i++)
  {
    if (isalnum(text[i]))
    {
      letters++;
    }
    else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
    {
      zinnen++;
    }
    else if (text[i] == ' ')
    {
      woorden++;
    }
  }

  float l = (float)letters / woorden * 100;
  float s = (float)zinnen / woorden * 100;
  float cijfer = 0.0588 * l - 0.296 * s - 15.8;

  if (cijfer >= 16)
  {
    printf("Grade 16+");
  }
  else if (index < 1)
    printf("Before Grade 1");
  else
  {
     printf("Grade %.0f", round(cijfer));
  }
  printf("\n");
}

