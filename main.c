// CS2600 - Andrew Jujun
#include <stdio.h>
#include <stdlib.h>
#include "game.h"

#define DEFAULT_MAX 10

int main()
{
  // Outline:
  // 1. Create necessary functions -> randomize, show menu, play game, set max
  // 2. Create command handler
  // 3. Set user constraints
  // 4. Create main

  int max;
  int input;

  do
  {
    max = readMax();

    printf("Type 1 to play the game\n");
    printf("Type 2 to change the max guess\n");
    printf("Type 3 to quit\n");
    scanf("%d", &input);

    if (input < 0 || input > 3)
      continue;

    if (input == 1)
      initGame(max);

    if (input == 2)
      writeMax();

    if (input == 3)
      break;
  } while (1);
  
  return EXIT_SUCCESS;
}