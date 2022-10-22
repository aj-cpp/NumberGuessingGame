#include "game.h"

void initGame(const int max)
{
  int num = randomize(max);
  
  printf("Guess a number between 0 and %d\n", num);

  do
  {
    scanf("%d")
  }
}