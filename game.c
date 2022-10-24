#include "game.h"

#define MAX_LENGTH 256

void initGame(const int max)
{
  char input[MAX_LENGTH];
  int num = randomize(max);
  int guess;
  
  printf("Guess a number between 1 and %d\n", max);

  do
  {
    scanf("%s", input);
    guess = atoi(input);

    if (guess == 0)
      break;

    if (guess < 0)
    {
      printf("Number needs to be higher than 1!\n");
      continue;
    }

    if (guess > max)
    {
      printf("Number must be between 1 and %d!\n", max);
      continue;
    }

    if (guess > num)
      printf("Number is lower!\n");

    if (guess < num)
      printf("Number is higher!\n");

  } while (guess != 0 && guess != num);

  if (guess != num || guess == 0)
    return;

  printf("You win! The number is %d\n", num);
}