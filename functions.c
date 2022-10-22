#include "functions.h"

int randomize(const int max)
{
  srand(time(0));
  return rand() % max;
}