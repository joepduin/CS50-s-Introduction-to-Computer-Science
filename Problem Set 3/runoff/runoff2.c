#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    int voters = get_int("Number of voters: ");

    for (int i = 0; i < voters; i++)
    {
        for (int c = 0; c < candidate_count; c++)
        {
          string vote = get_string("Vote %i: ", c + 1);
          int fout = 0;

          for (int g = 0; g < candidate_count; g++)
          {
            if (strcmp(vote, candidates[g].name) == 0)
            {
              candidates[g].votes = candidates[g].votes + c;
            }
            else
            {
              fout++;
            }
          }
          if (fout == candidate_count)
          {
            printf("Invalid vote.\n");
            c--;
          }
        }
        printf("\n");
      }
}
